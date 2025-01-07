#include <iostream>
// #include <color>
// #include <graphics.h>
using namespace std;


//constructor simple exmaple

class Rectangle
{

	private:
		int length, breadth;
		int height, width;
		
	Rectangle()
	{
		height = 0;
		width = 0;
		length = 0;
		breadth= 0;
	}	
	//Rectangle(Cube cube);
	


};


//construuctor complex exmaple -- Initialization List

class Square{
	
	public:
		Square(): width(0), height(0) {} // Empty function body which is a constructor , as the variables have been already initialized
	private:
		int width;
		int height;
};


int main()
{

	return 0;
}

