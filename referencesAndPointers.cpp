#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

// Pass by value

int square1(int n)
{
    //address of n in square1() function is not same as the n1 in main() function

    cout << "Adress of n1 in square1() is " << &n << "\n" << endl;

    //clone modified in the function

    n *= n;
    return n;
}

// Pass by reference with Pointer Arguments

void square2(int* n)
{
    //Address of n1 in sqaure2() function is same as the one(n2) in main() function

    cout << "Address of n2 in sqaure2() is " << n << "\n " << endl;

    //explicit de-referencing to get the value pointed to

    *n *= *n;

}





void secondary()
{
    // Call-by-Value
    int n1 = 9;

    cout << "Address of n1 in main function is " << &n1 << "\n " << endl;
    cout << "Square1 of n1 - square1(n1) is: " << square1(n1) << "\n" << endl;


    // Call-by-Reference with Pointer Arguments
    int n2= 11;

    cout << "Address of n2 in main(): " << &n2 << "\n " ;
    square2(&n2);
    cout << ""


}


int main()
{
    secondary();
    return 0;
}