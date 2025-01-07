#include <iostream>

using namespace std;




// Call By Value Example
void increase_age_by_value_5 (int age)
{
	
	age += 5;
	cout << "Age in 5 years would be " << age << endl;
}



//Call by refrence

void increase_age_by_reference_5(int& age1)

{
	
	age1 += 5;
	cout << "Age in 5 years would be " << age1 << endl;
	
}



int pointer_modify (int* pointer)
{
	*pointer = 1 ;
	pointer = 0;
	
	return 0;
	
} 


int multiply(int multiplied, int multiplier = 1)
{
	return multiplied * multiplier;
	
}




//Function Overloading

bool isSafeHeightForRollerCoaster(int heightInCm)
{
	return heightInCm > 100 && heightInCm < 220;
}


bool isSafeHeightForRollerCoaster(float heightInCm)
{
	return heightInCm > 100 && heightInCm < 220;
}

bool isSafeHeightForRollerCoaster(double heightInCm)
{
	return heightInCm > 100 && heightInCm < 220;
}

int main()
{
	int age = 95;
	int age1 = 85;
	increase_age_by_value_5(age);
	cout << "Current age" << age;
	
	increase_age_by_reference_5(age1);
	if (age1 >= 90)
	{
		cout << "Current age1 is " << age1;
	}
	
	
	// For pointers now
	int a = 0;
	int* ptr = &a;
	
	pointer_modify(ptr);
	
	//cout << "Value of the pointer " << *ptr << "\n" << endl; 
	//cout << "Did the pointer change   " << *ptr << "   " << ptr == &a << endl;
	
	int z = multiply(10,3);
	int y = multiply(20);
	
	cout <<"/n \n \n" <<  z << "   " << y << "  " << endl;
		
		
	cout << isSafeHeightForRollerCoaster(150) << "\n";
	
	cout << isSafeHeightForRollerCoaster(144.5f) << " \n";
	
	// isSafeHeightForRollerCoaster(double 11111111111 );
}