#include <iostream>
#include <vector>
#include <string>

using namespace std;

std::string global_str;
int global_int;

int local_int;

int main()
{
	int _ = 90;
	
	cout << _ << endl;
	
	//int catch-22;
	int catch_22 = 1000;
	cout << catch_22 << endl;
	
	//int 1_or_2 = 1;
	int _1_or_2 = 1;
	cout << _1_or_2 << endl;
	
	double DOUBLE = 3.14;
	
	cout << DOUBLE << endl;
	
	cout << double << endl;
	
	
	
	extern int local_int;
	std::string local_str;
	
	double wage;
	int input_value;
	
	int i = ( 3.14 );  // int i = {3.14} will throw narrowing conversion error
	int j = 3.14;
	cout << "local -----" << local_int <<  "-------" << local_str << endl;
	
	
	cout << "Global-----" << global_int << "-------" << global_str << endl;
	
	cout << "this is i" << i << endl;
	
	cout << "this is j" << j << endl;
	
	double salary = wage = 9999.99;  // wage should be intialized before using it
	
	cout << "this is SALARy   " << salary << endl;
	
	int __some__name = 3;
	cout << "this is WAGE   " << wage << endl;
	
	std::cin >> input_value;
	
	cout << "this is INPUT VALUE   " << input_value << endl;
}