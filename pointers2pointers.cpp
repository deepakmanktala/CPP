#include <iostream>
#include <cstdio>

#include <vector>

using namespace std;

int main()
{
    char a;
    char *b;

    char ** c;

    a = 'd';

    b = &a;

    c = &b;


cout << a << "######"<< b << "---------"<< c << " "; 

}