#include <iostream>

using namespace std;



int global_var = 100;

int print()
{
	cout << global_var << endl;
	//  cout << local_var << endl;
	return 0;
}

int main()
{
	int local_var = 10;
	
	cout << local_var << endl;
	cout << global_var << endl;
	print();

}