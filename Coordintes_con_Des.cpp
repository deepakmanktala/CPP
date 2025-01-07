#include <iostream>
// #include <color>
// #include <graphics.h>
using namespace std;


//constructor simple exmaple

class Coordinates
{

	public:
		Coordinates() {
			cout << "Constructor is called here" << endl;
		}
		
		
		~Coordinates() {
			cout << "Destructor is called here " << endl;
		}
};


int main()
{
	
	// Rectangle rectangle(10,15);
	Coordinates c;
	return 0;
}

