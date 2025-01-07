#include <iostream>

using namespace std;



int global_var = 100;


int main()
{
	int global_var = 1000;
	
	cout << " It is for Global" << ::global_var << endl;
	cout << " It is for local " << global_var << endl;


}