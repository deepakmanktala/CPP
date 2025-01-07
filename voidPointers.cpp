#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;


void increase(void* data, int ptrsize)
{
    if (ptrsize == sizeof(char))
    {
        char* ptrchar;

        // typecast data to a char pointer

        // cout << *ptrchar ;
        ptrchar = (char*) data;

        // increase the char stored at *ptrchar by 1

        (*ptrchar) ++ ;

        cout << "Data points to a char" << "\n" ;

    }
    
    else if (ptrsize == sizeof(int))
    
    {
        int* ptrint;

        //typecast data o a int pointer

        ptrint = (int* ) data;

        //Increase the int stored at ptrint by 1

        (*ptrint)++;

        cout << "data points to an int " << "\n" << endl; 
    }
    
}


void deepak()
{

//declare c character

char c = 'x';

// declare an integer

int y = 100;

// call increase function for both char and the int

increase(&c, sizeof(c));

cout << "The new value of c is - " << c << " " << endl;


increase(&y, sizeof(y));

cout << "The new value of y is - " << y << " " << endl;


}

// driver program

int main()
{
    deepak();
}