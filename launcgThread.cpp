#include <iostream>
#include <thread>

using namespace std;




void do_some_work();


class background_task
{
public:
    void operator () () const
    {
            void do_something() ;
            void do_something_else() ;
            // return 0;
    }
};

background_task f;
std::thread my_thread(f);


int main()

{

// thread mythread(do_some_work);

background_task f;
thread my_thread((f));

my_thread.join();

// thread my_thread((f));

thread my_thread_2((background_task()));
 return 0;
}