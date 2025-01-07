// #include <cstdio>
#include <iostream>
#include <thread>
// #include pthread.h

using namespace std;

//create a dummy function

void foo(int Z)
{
    for (int i = 0; i < Z; i++)
    {
        std::cout << "Thread using function pointer as callable";
    }
}

// A callable object

using namespace std;


class thread_object
{
    public:
        void operator()(int x)
        {
            for (int i = 0; i < x; i++)
                {
                    cout << "Thread using function object as callable\n" ; 
                }
        }
};

//class definition
using namespace std;

class Base
{

public:
    //non-static member function

    void foo()
    {
        cout << "Thread using non-static function as callable" << endl;

    }

    //static member function

    static void foo1()
    {
        cout << "Thread using static member function as callable"  << endl;
    }

};

//driver code

using namespace std;

int main()
{

    cout << "There are 3 threads - Th1, TH2, TH3 which are operating independently" << endl ;

    // This thread th1 is launched by using
    // function pointer as callable

thread th1(foo, 10);


    // This thread th2 is launched by using
    // function object as callable

    std::thread th2(thread_object(), 10);

// Define a Lambda Expression
// Define a Lambda Expression

    auto f = [](int x)
    {
        for (int i = 0; i < x; i++)

            {
                cout << "Thread using lambda expression as callable\n ";}

    };

    // This thread is launched by using
    // lambda expression as callable
    std::thread th3(f, 10);

    //now create an object of base classs

    Base b;

    std::thread th4(&Base::foo, &b );

    std::thread th5(&Base::foo1);

    // // Wait for the threads to finish
    // Wait for thread t1 to finish

    th1.join();

    // Wait for thread t2 to finish
    th2.join();

    // wait for th3 to finish

    th3.join();

    //wait for th4 to finish

    th4.join();

    //wait for thread t5 to finish

    th5.join();

    return 0;

}