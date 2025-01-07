#include <iostream>

using namespace std;

// Define global variables here

const int position = 10;

const int already_computed = 3;

void print_tenth_fibonacci()
{
	
	
	// Define local variable inside the function
	int n_1 = 0;
	
	
	int n_2 = 1;
	
	int current = n_1 + n_2;
	int count = 0;
	// We can use the global variables here
	
	for (int i = already_computed; i <= position; i++)
	{
		current = n_1 + n_2;
		cout << current << "   This is the current now   " << count << endl;
		count += 1;
		n_2 = n_1;
		n_1 = current;
		
	}
	
	cout << current << endl;
}


int main()
{
	print_tenth_fibonacci();
}