#include <iostream>

using namespace std;

void Cal()
{
	static int count = 1;
	static int x = 1;
	
	x = count * count;
	cout << count << "*" << count;
	cout << " is :" << x << endl;
	count++;
}


int main()
{
	
	for (int i = 1; i <11; i++){
		Cal();
		
	}
	return 0;
	
	
}

