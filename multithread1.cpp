#include <cstdio>
// #include <pthread>

// #include <pthread>
#include <thread>

using namespace std;

void foo(int a, int b);

int main() {
// Pass a function and args
std::thread t1(foo, 1, 2);
// Pass a lambda
std::thread t2([]() {
foo(3, 4);
});
foo(5, 6);
t2.join();
t1.join();
}