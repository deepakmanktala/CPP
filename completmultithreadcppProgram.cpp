#include<iostream>
#include<thread>

using namespace std;

using namespace thread;

// at first we ll create a dummy fucntion

void dummy(int d)
{
    for (int i =0; i<d; i++){
        cout << "Thread using function pointer as callable/n \n" << endl;
    }

}

// now we ll create a callable object

class thread_obj
{
    public:
        void operator()(int x){
            for(int i=0; i < x ; i++){
                cout << " Thread using function object as callable /n \n" << endl;
            }

        }
};


// Base class definition

class Base
{
    public:
        //non static member function
        //call from function dummy defined above
        void 

};