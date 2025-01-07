#include <iostream>

using namespace std;

class Copy_Constructor {
    // Private members
	
	
	public:
		Copy_Constructor(const Copy_Constructor& other) : member(other) {}
		
	private:
		int member;
		

};



int main() {
    
	Height h(65);
	print_feet(h);
    return 0;
}
