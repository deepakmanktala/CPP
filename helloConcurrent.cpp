#include <iostream>
#include <vector>
#include <thread>

using namespace std;

void hello()
{

cout << "   Hello , Concurrent World! \n";

}


int main()
{
    cout << "Hello, Concurrent C++";
    
    thread t(hello);
    t.join();

    return 0;
}