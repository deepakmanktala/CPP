#include <iostream>
#include <thread>

using namespace std;


struct func

{

    int& i;

    func(int& i_):i(i_){}

    void operator()()
    {
        for (unsigned j =0 ; j < 100000000 ; j++)
            {
                do_something(i);
            } 
        }

};


void oops()
{
    int some_local_state = 0;
    func my_func(some_local_state);
    std::thread my_thread(my_func);
    my_thread.join();
    my_thread.detach();

}


int main()
    {
        oops();
        return 0;
    }


// void do_some_work();


// class background_task
// {
// public:
//     void operator () () const
//     {
//             void do_something() ;
//             void do_something_else() ;
//             // return 0;
//     }
// };

// background_task f;
// std::thread my_thread(f);


// int main()

// {


// return 0;

// }