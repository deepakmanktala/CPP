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
// #include<operator>


#pragma comment(lib, "user32.lib")

using namespace std;


#include <stdexcept>


struct Visitor{
    void operator()(const string& value){
        cout << "a string " << value << endl;
    }

    void operator()(const int& value){

        cout << "an int     " << value << endl;


    }
};



int main() {

    variant<string, int> variant = 42;
    Visitor visitor;
    cout << "The variant contains" << endl;
    visit(visitor, variant);

    variant = string("Hello World!");
    cout << "The variant contains " << endl;
    visit(visitor, variant);


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
