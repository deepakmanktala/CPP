#include <iostream>
#include <Windows.h>
#include <thread>
#include <chrono>
#include<vector>
#include<tuple>
#include<utility> // it is used for pair
#include<string>
#include<optional>
#include<variant>
#include <stdexcept>


#pragma comment(lib, "user32.lib")

using namespace std;





int main() {
	
	variant<string, int> variant1 = 42;
	cout << get<1>(variant1) << endl;
	cout << get<int>(variant1) << endl;	
}
