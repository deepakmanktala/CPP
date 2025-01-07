#include <iostream>

using namespace std;



int main()
{
	int first_variable = 10;
	int& ref_name = first_variable;
	
	cout << "Value of first variable " << first_variable << endl;
	cout << "Value of ref_name: " << ref_name << endl;

	const int num3 = 3;

	cout << num3 << endl;

	const int imm = 1;
		cout << imm << endl;
		int imm_change = 11;
		imm = imm_change;


}