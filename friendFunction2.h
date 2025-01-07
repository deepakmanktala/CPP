#include <iostream>

using namespace std;

class FriendFunction {
    // Private members
    int x = 2;
    int y = 2;

public:
    // Declare the friend function
    friend void print(const FriendFunction &object);
};

// Friend function definition
void print(const FriendFunction &object) {
    cout << "x: " << object.x << ", y: " << object.y << endl;
}

int main() {
    // Creating an object of FriendFunction
    FriendFunction myFriend;

    // Call the friend function directly
    print(myFriend);

    return 0;
}
