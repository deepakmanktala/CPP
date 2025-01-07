#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

void pointerExample()
{

int var = 20;

// declare a pointer variable

int* ptr;

// data type of ptr and var must be the same

ptr = &var;

//assign the address of a varaible to pointer

cout << "value at ptr is : " << ptr << "\n" ;

cout << " value at var is : " << var << "\n";

cout << " value at *ptr is : " << *ptr << "\n" ;

cout << "address of the var variable is " << &var << "\n";

}

int main()
{

pointerExample();
return 0;

}
