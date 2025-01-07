#include <iostream>
// #include <color>
// #include <graphics.h>
using namespace std;

class PrintName
{
	
	string name;
	
	public:
		void set_name(const string& name)
		{
			this->name = name;
		}
		
		void print_name(){
			cout << this->name << "   Welcome to the magnificent world of Magic here!!" << endl;
		}
		
		
};



int main()
{

	PrintName object;
	object.set_name("Magnificent");
	object.print_name();
	

	
}

