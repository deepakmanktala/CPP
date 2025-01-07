#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int var = 10;
    std::cout << var;
    // std::cout << *var;

    int *ptr = &var;
    *ptr = 20;

    std::cout << "   "<< *ptr << " "<< endl;
    std::cout << ptr;
    cout << var;


    int **ptr2 = &ptr;
    **ptr2 = 30;

    cout << "Check this";

    cout << ptr << "          ----------" << *ptr << "  & of *ptr"  << &*ptr; //<< &ptr << ;

    cout << "Check this 2222";

    cout << ptr << "          ----------" << *ptr << "  & of *ptr"  << &*ptr;
    
    // cout << var << *ptr << **ptr2 << &var << ptr2 << &ptr << ptr;
    // int 
    return 0;


}
