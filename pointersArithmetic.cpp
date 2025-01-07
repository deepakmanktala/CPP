#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

void myPointers()
{
    //declaring an array

    int a[3] = {10,20,30};

    // declare a pointer variable 

    int* ptr;

    cout << ptr << " " << endl;


    //assign the address of v[0] to ptr

    ptr = a;

    cout << ptr << "  " << endl;

    for (int i = 0; i < 3 ; i++)
    {
        cout << "Value at ptr is : " << ptr << "  "<< endl;
        cout << " Value at *ptr is : " << *ptr <<  "  " << endl;
        
        ptr++;

    }

    cout << a[2] << "  this is THE END " << endl;

     cout << a[3] << "  this is THE END " << endl;
     cout << a[167] << "  this is THE END " << endl;


    a[2] = a[167];

    cout << "\n this is teh end" << a[167] << "   " << a[2] << endl;

    cout << "\n this is teh end -- 6422270" << a[6422270] << " this is for a[]2  " << a[2] << endl; 


}

int main()
{

    myPointers();
    
    return 0;

}