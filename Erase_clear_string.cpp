#include <iostream>
#include <Windows.h>
#include <thread>
#include <chrono>
#include<vector>
#include <string>

#pragma comment(lib, "user32.lib")

using namespace std;

int main() {
	
	// a C-string, which is a CHar string being explicit about the null temrinator
	
	const char charString[8] = {'C', '+', '+', ' ', '1', '0', '1', '\0'};
	
	//contruct a C-string from a literal string which will automatically add a null terminator in the end
	
	const char* literalString = "C++ Fundamentals";
	
	
	string str = "C++ Fundmaentalss";
	
	string strSting = literalString;
	
	
	const char* charString2 = strSting.c_str();
	
	
	
	
	
	
	cout << charString << endl;
	cout << literalString << endl;
	
	//charString.erase(2,3);
	
	cout << charString << endl;
	
	cout << str << endl;
	str.erase(2,7);
	
	cout << str << endl;
	
	cout << strSting << endl;
	
	
	cout << charString2 << endl;
	// charString2.clear();
	cout << "Cleared char string2 " << charString2 << endl;
}
