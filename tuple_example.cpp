#include <iostream>
#include <Windows.h>
#include <thread>
#include <chrono>
#include<vector>
#include<tuple>
#include<utility> // it is used for pair
#include<string>



#pragma comment(lib, "user32.lib")

using namespace std;

int main() {
	
	tuple<string, int, float> deepak = make_tuple("Deepak Manktala", 7 , 1.6f);
	
	cout << "Name -- " << get<0>(deepak) << "-- Agent ID --  " << get<1>(deepak) << " --  Height -- "  <<get<2>(deepak) << endl;

	
	// initialize a vector with values 1,2,3
	vector<int> numbers = {1,2,3};

    return 0;
}
