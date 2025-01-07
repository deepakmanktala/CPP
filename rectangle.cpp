#include <iostream>
// #include <color>
// #include <graphics.h>
using namespace std;


//constructor simple exmaple

class Rectangle
{

	public:
		int length;
		int width;
		
	// Rectangle rectangle(10,15);
};

Rectangle rectangle{10,15};
//construuctor complex exmaple -- Initialization List


// Destructor example

class Destructor_demo{
	
	public: 
		Destructor_demo() {}; // Constructor
		~Destructor_demo() {}; // Destructor
		
	
	
};

int main()
{
	
	// Rectangle rectangle(10,15);
	cout << rectangle.length << "    ,  " << rectangle.width  << " " << endl;  

	return 0;
}

