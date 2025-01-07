#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	int count =0;
	double sum = 0;
	
	double x;

		while (cin >> x){
			++count;
			sum += x;
			cout << sum << endl;
		}
	
}