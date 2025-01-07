#include <iostream>

using namespace std;

class DataScienceDev{

    public:
        DataScienceDev(){
            cout << "Welcome to the data science developer's Community" << endl;
        }
};

class FutureCPPDEV{

    public:
        FutureCPPDEV(){
            cout << "Welcome to the C++ Developer Community" << endl; 
        }
};

class Student : public DataScienceDev, public FutureCPPDEV{

    public:
        Student(){
            cout << "Student is a Data Science Developer and a C++ Programmer"  << endl;
        }
};

int main(){

    Student S1;
    return 0;
}