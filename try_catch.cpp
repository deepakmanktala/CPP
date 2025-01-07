#include <iostream>

using namespace std;




int main()
{
	unsigned count = 0;
	
	for (unsigned x = 1 ; x <= 30 ; x++)
	{
		if (x%3 ==  0)
		{
			count++ ;
			cout << x << endl;
		}
	}
	
	
	
	cout << count << endl;
	// cout << x << endl;


}