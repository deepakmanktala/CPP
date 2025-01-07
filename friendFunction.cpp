#include <iostream>

using namespace std;


class FriendFunction{
	
	int x = 2;
	int y = 2;
	
	public:
		friend void print (const FriendFunction &object);
	
};


void print (const FriendFunction &object){
	std::cout << object.x << object.y << endl;
}

int main(){
	
	FriendFunction myFriend;
	
	print(myFriend);
}