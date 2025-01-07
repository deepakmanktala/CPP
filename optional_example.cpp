#include <iostream>
#include <Windows.h>
#include <thread>
#include <chrono>
#include<vector>
#include<tuple>
#include<utility> // it is used for pair
#include<string>
#include<optional>




#pragma comment(lib, "user32.lib")

using namespace std;


#include <stdexcept>




int main() {
	
	tuple<string, int, float> deepak = make_tuple("Deepak Manktala", 7 , 1.6f);
	
	cout << "Name -- " << get<0>(deepak) << "-- Agent ID --  " << get<1>(deepak) << " --  Height -- "  <<get<2>(deepak) << endl;

	
	// initialize a vector with values 1,2,3
	vector<int> numbers = {1,2,3};
	
	// We might not know the hour, but if we know its an integere.
	
	optional<int> currentHour;
	
	if (not currentHour.has_value()){
		cout << "We dont know the time" << endl;
	}
	
	if (currentHour)
		{
			cout << "The current Hour is  :" << currentHour.value() << endl;
			
		}
    return 0;
}
