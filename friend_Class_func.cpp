#include <iostream>

using namespace std;

class Height {
    // Private members
	private:
		double inches;
	
	public:
		Height(double value): inches(value) { } // Declare the Height Constructor with initialized value of inches function
		
		friend void print_feet(Height);

};


void print_feet(Height h)
{
	cout << "Your  height in inches is  " << h.inches << endl;
	cout << "Your height in ft is   "<< h.inches * 0.083333 << endl;
}


int main() {
    
	Height h(65);
	print_feet(h);
    return 0;
}
