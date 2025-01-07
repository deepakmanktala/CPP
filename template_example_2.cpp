#include <iostream>
using namespace std;

// Function template to swap two variables
template <typename T>

void my_swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    my_swap(x, y);  // swap integers
    cout << "After swap: x = " << x << ", y = " << y << endl;

    double a = 3.14, b = 2.71;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);  // swap doubles
    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
