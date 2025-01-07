#include <iostream>
#include <cstring> // For strcpy and strlen

class String {
private:
    char* str;
    
public:
    // Constructor to initialize the object with a C-string
    String(const char* inputStr) {
        str = new char[strlen(inputStr) + 1];  // Allocate memory
        strcpy(str, inputStr);  // Copy the input string
    }
    
    // Copy Constructor
    String(const String& other) {
        std::cout << "Copy constructor called!" << std::endl;
        str = new char[strlen(other.str) + 1];  // Allocate new memory
        strcpy(str, other.str);  // Copy the data from the other object
    }
    
    // Destructor to free the allocated memory
    ~String() {
        delete[] str;
    }
    
    // Method to display the string
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    String s1("Hello, world!");
    String s2 = s1;  // Copy constructor will be called here
    
    std::cout << "s1: ";
    s1.display();
    
    std::cout << "s2: ";
    s2.display();
    
    return 0;
}
