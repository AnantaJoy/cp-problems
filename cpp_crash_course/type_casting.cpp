#include <iostream>
using namespace std;

int main(){

// Implicit type casting 
	int x = 'A';
	bool y = true;
	cout << x + y <<endl;

// Explicit type casting
	int a = 67;
	cout << char(a);
}