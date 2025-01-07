#include <iostream>

using namespace std;

//-------------------------------------------
/// struct A {
///};

///struct B {};

///struct C :  A, B {};
//----------------------------------------------------


// first base classs
class Vehicle{

    protected:

        int getTankCapacity(){
            const int tankLitres = 10;
            cout << "The current capacity of your car is" << tankLitres << "   Litres." << endl;
            return tankLitres;
            }

};

// second base class
class CollectorItem{
    public:
        float getValue(){
            return 100;
        }
};

// Subclass derived from two base classes

class Ferrari250GT : protected Vehicle, public CollectorItem{

public:
    Ferrari250GT(){
        cout << "Thank you for buying the Ferrari 250 GT " << getTankCapacity() << endl;
        // return 0;
    }

};

int main(){

    Ferrari250GT myFerrari;

    cout << "The value of Ferrari is " << myFerrari.getValue() << endl;

    // cout << myFerrari.getTankCapacity()  << endl;
    return 0;
}