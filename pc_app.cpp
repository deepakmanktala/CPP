#include <iostream>
#include <stdio.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <string>
#include <netinet/in.h>
#include <netpacket/packet.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <arpa/inet.h>
#include <net/if_arp.h>
#include <sys/socket.h>
#include <netinet/tcp.h>
#include <sys/poll.h>
#include <errno.h>

#define INFO(format, ...) do {	\
								printf("[WIFIWATCH] %s: " format "\n", __FUNCTION__, ##__VA_ARGS__); \
								} while (0)

#define ERROR(format, ...) do {	\
								printf("[WIFIWATCH] %s: " format "\n", __FUNCTION__, ##__VA_ARGS__); \
								} while (0)

#define DEBUG(format, ...) do {	\
								printf("[WIFIWATCH] %s: " format "\n", __FUNCTION__, ##__VA_ARGS__); \
								} while (0)

int main()
{
	int fd = socket(AF_INET, SOCK_STREAM, 0);
	if(fd < 0)
	{
		ERROR("Failed to create socket errno %d: %m", errno);
		_exit(1);
	}
	
	int alive = 1;
	int ret = setsockopt(fd, SOL_SOCKET, SO_KEEPALIVE, &alive, sizeof(alive));
	if(ret < 0)
	{
		ERROR("Failed to set broadcast socket [errno %d: %s]", errno, strerror(errno));
		close(fd);
		_exit(1);
	}
	
	int keepidle = 2, keepcnt = 5, keepintvl = 2;
	setsockopt(fd, IPPROTO_TCP, TCP_KEEPIDLE, &keepidle, sizeof(keepidle));
	setsockopt(fd, IPPROTO_TCP, TCP_KEEPCNT, &keepcnt, sizeof(keepcnt));
	setsockopt(fd, IPPROTO_TCP, TCP_KEEPINTVL, &keepintvl, sizeof(keepintvl));

	sockaddr_in si;
	si.sin_family = AF_INET;
	si.sin_addr.s_addr = inet_addr( "127.0.0.1" );
	si.sin_port = htons( 4040 );
	if(bind( fd, (sockaddr*)&si, sizeof si ) < 0)
	{
		ERROR("Failed to bind errno %d: %m", errno);
		close(fd);
		_exit(1);
	}
	
	listen(fd, 1);

	sockaddr_in client;
	socklen_t client_size;
	int clientFD = accept(fd, (sockaddr*)&client, &client_size);

	ERROR("Client connected!");
	
	getchar();

	ERROR("Entering select");
	fd_set rfds;
	FD_ZERO(&rfds);
	FD_SET(clientFD, &rfds);
	select(clientFD + 1, &rfds, &rfds, &rfds, nullptr);

	sleep(2);
	close(fd);

	return 0;
}