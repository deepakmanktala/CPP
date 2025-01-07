#include <iostream>

using namespace std;

class Myname{
	
	private:
		string name;
		
	public:
		void setName(const string& name){
			
			this->name = name;
		}
		
		void printName(){
			cout << this->name << "    It is my name here!!" << endl;
		}
		
		
	

};




int main(){
	Myname object;
	object.setName("Deepak");
	object.printName();
	
	
	return 0;
}