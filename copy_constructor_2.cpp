#include <iostream>
#include <cstring>  // For strcpy and strlen

class Student {
private:
    char* name;
    int age;

public:
    // Default constructor
    Student(const char* studentName, int studentAge) {
        name = new char[strlen(studentName) + 1];
        strcpy(name, studentName);
        age = studentAge;
    }

    // Copy constructor
    Student(const Student& other) {
        name = new char[strlen(other.name) + 1];  // Allocate new memory for name
        strcpy(name, other.name);                  // Copy the name
        age = other.age;                           // Copy the age
    }

    // Destructor to free the allocated memory
    ~Student() {
        delete[] name;
    }

    // Function to display the details of the student
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Creating an object of Student
    Student student1("John Doe", 20);

    // Creating a copy of student1 using the copy constructor
    Student student2 = student1;

    // Displaying the information of both students
    student1.display();
    student2.display();

    return 0;
}
