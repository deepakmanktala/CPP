#include <iostream>
#include <thread>

using namespace std;
using namespace thread;

// using namespace thread

void foo(params)
{
    //Add any of the statements here

    cout << "I am part of the multi thread program with function pointer call" << endl;
}

thread thread_obj1(foo, params)


// define a lambda expression

auto f = [](params)

{
    //statements here

    cout << "I am part of the multi  thread program with a lambda expression" << endl;

}

thread thread_object( f, params);


// Launching Thread using Function Objects

class fn_object_class 
{
    //Overload operator

    void operator()(params)

    {
        //Statements;

        cout << "I am part of the multi thread program where 
        the Thread would be launched using Function Objects" << endl;
    }
}


//Create Thread Object

thread thread_obj2 (fn_object_class(), params)




// launching thread using non-static member function

//base class

class Base
{
public:
    //non-static member function
    
    void foo(param){statements;}

};

// Create object of the base class

Base b;

// first param is the refernce to the function and second param 
// is the reference of the object and then we have the arguments

thread thread_obj4(&Base::foo, &b, params)






// Launching thread using static member function which is defined by using keyword Static

// defining class

class Base
{

    public:
    // static member function to be define dhere

    static foo(params) 
    {
        Statements;
        cout << " I am a static Member function now"
    }
}