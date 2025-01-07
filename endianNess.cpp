#include <iostream>

using namespace std;



int main()
{

int num = 1;

// int 1_yum = 2;

int z;
	
if (*(char*)&num == 1) 

{
    cout << ("Little-endian\n");
}

else
{
	cout << ("Big-endian\n");
}


return 0;
}