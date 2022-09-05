// char, int, double, float, bool

#include<bits/stdc++.h>
using namespace std;

int main(){
	int i;
	float f;
	double d;
	char c;
	bool b;
	cin >> i >> f >> d >> c >> b;
	cout << i << endl;
	cout << f << endl;
	cout << d << endl;
	cout << c << endl;
	cout << b << endl;
	cout << "Size of integer:" << sizeof(i) << " bytes" <<endl;
	cout << "Size of float:" << sizeof(f) << " bytes" <<endl;
	cout << "Size of double:" << sizeof(d) << " bytes" <<endl;
	cout << "Size of character:" << sizeof(c) << " bytes" <<endl;
	cout << "Size of boolean:" << sizeof(b) << " bytes" <<endl;
}