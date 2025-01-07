#include <iostream>
#include <cstring>  // for strcpy and strlen

class Person {
private:
    char* name;  // Dynamically allocated memory for name

public:
    // Parameterized constructor
    Person(const char* n) {
        name = new char[strlen(n) + 1];  // Allocate memory for name
        strcpy(name, n);  // Copy the name into the allocated memory
    }

    // Move constructor
    Person(Person&& other) noexcept {
        name = other.name;  // Transfer ownership of the resource
        other.name = nullptr;  // Set the other object's pointer to nullptr to prevent double delete
    }

    // Destructor to release memory
    ~Person() {
        delete[] name;
    }

    // Method to display the name
    void display() const {
        if (name)
            std::cout << "Name: " << name << std::endl;
        else
            std::cout << "Name: nullptr" << std::endl;
    }
};

int main() {
    // Create a Person object
    Person p1("John");

    // Use move constructor to transfer ownership
    Person p2 = std::move(p1);

    // Display both objects
    p1.display();  // Should show "Name: nullptr" because p1's resource has been moved to p2
    p2.display();  // Should show "Name: John" because p2 now owns the resource

    return 0;
}
