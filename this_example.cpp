#include <iostream>
#include <string>

class MyClass {
private:
    std::string name;

public:
    // Constructor to initialize name
    MyClass(const std::string& n) : name(n) {}

    // Member function using 'this' to access the object's data
    void printName() const {
        // 'this' is a pointer to the current object
        std::cout << "Name: " << this->name << std::endl;
    }

    // Member function that uses 'this' to resolve name conflict
    void setName(const std::string& name) {
        // Here, we use 'this->name' to refer to the class member and 'name' to refer to the parameter
        this->name = name;
    }

    // Const member function: 'this' is a pointer to a constant object
    void displayName() const {
        // Cannot modify the object since 'this' is a pointer to a constant object
        std::cout << "Name (const): " << this->name << std::endl;
    }
};

int main() {
    MyClass obj("John");

    // Call member function
    obj.printName();

    // Set a new name using the member function
    obj.setName("Alice");
    obj.printName();

    // Call the const member function
    obj.displayName();

    return 0;
}
