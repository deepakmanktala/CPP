#include <iostream>
#include <functional>  // For std::invoke

using namespace std;

// Function definition
void do_action(int a, float b, double c) {
    cout << "int: " << a << ", float: " << b << ", double: " << c << endl;
}

double d = 1.5;  // Global variable

int main() {
    // Using std::invoke to call do_action
    std::invoke(do_action, 1, 1.2f, d); // This is now inside main()

    return 0;
}
