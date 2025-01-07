#include <iostream>
#include <vector>
#include <cstdio>
#include <thread>
#include <string>

using namespace std;

void task1(string msg)
{
    cout << "task one says " << msg; 
}

int main()
{

thread t1(task1, "Hello");
// do whatever 

// Makes the main thread wait for the new thread to finish execution, therefore blocks its own execution.


t1.join();

}


