#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;



int main()


{



int nums[2][3] = {{1,2,3}, {4,5,6}};

char ptr = 0;

char x = *(ptr+3);

char y = ptr[3];

cout << nums << "  " << ptr << "  " << x << "  " << y;


}