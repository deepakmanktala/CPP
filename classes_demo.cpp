#include <iostream>

using namespace std;

//Functions within a class is called Method

// Variable defined inside a class are called Fields
//Private Access Specifier -- which is only applicable for that particular class
//Protected Access Specifiers are for that class and a derived class
//Public is open to all a ll
// struct and class are almost similar. The only difference is for the strcut the default access modifier is public where as for Class it is Private.

class MyClass{
	// Here the default access modifier is private
	private:
		int privateDataMember;
		int privateMemberFunction;
	protected:
		int protectedDataMember;
		int protectedMemberFunction;
	public:
		int publicDataMember;
		int publicMemberFunction;
		
};


struct myStruct {
	// Here the default access modifier is public
	
	private:
		int privateDataMemberStruct();
};


// Class defines a blueprint of an object and there can be multiple objects from the same class...objects are also referred to as instances


class Coordinate{
	
	float latitude;
	float longitude;
	
	
	float distance(const Coordinate& other_coordinate)
	
};


class StaticMembersDemo{

		private:
			static int StaticMemberName; 
	
};

int main()
{
	
	
	
}

