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

template <typename T>
class Optional {
private:
    T value;
    bool has_value;

public:
    // Default constructor
    Optional() : has_value(false) {}

    // Constructor with value
    Optional(const T& value) : value(value), has_value(true) {}

    // Check if the value is present
    bool has_value() const {
        return has_value;
    }

    // Get the value (throws an exception if no value)
    T& value() {
        if (!has_value) {
            throw std::runtime_error("No value present");
        }
        return value;
    }

    const T& value() const {
        if (!has_value) {
            throw std::runtime_error("No value present");
        }
        return value;
    }

    // Reset the value (make it empty)
    void reset() {
        has_value = false;
    }

    // Optional getter with a default value
    T value_or(const T& default_value) const {
        return has_value ? value : default_value;
    }
};


int main() {
	
	tuple<string, int, float> deepak = make_tuple("Deepak Manktala", 7 , 1.6f);
	
	cout << "Name -- " << get<0>(deepak) << "-- Agent ID --  " << get<1>(deepak) << " --  Height -- "  <<get<2>(deepak) << endl;

	
	// initialize a vector with values 1,2,3
	vector<int> numbers = {1,2,3};
	
	// We might not know the hour, but if we know its an integere.
	
	Optional::optional_1<int> currentHour;
	
	if (not currentHour.has_value()){
		cout << "We dont know the time" << endl;
	}
	
	if (currentHour)
		{
			cout << "The current Hour is  :" << currentHour.value() << endl;
			
		}
    return 0;
}
