#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string ab;

    ab = "my name is";

    cout << ab << " " << endl;

    string name = "Anthony";

    cout << ab << " " << name << "  "<< endl;

    cout << "Please enter your first name and age \n \n";
 
    string first_name; // string variable
    int age; // integer variable
 
    cin >> first_name; // read a string
    cin >> age; // read an integer

    cout << "Hello, " << first_name << " (age " << age << ")\n";

    cout << "Please enter your first and second names\n";
    
    
    string first;
    string second;
    
    cin >> first >> second; // read two strings;
    
    cout << "Hello, " << first <<"  "<< second << " \n";


    string first_name2; // string variable
    double age2; // integer variable
 
    cin >> first_name2; // read a string
    cin >> age2; // read an integer

    cout << "Hello, " << first_name2 << " age months " << age2*12 << ")\n";
    return 0;
}           