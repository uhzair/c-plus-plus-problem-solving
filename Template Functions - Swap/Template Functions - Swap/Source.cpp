#include <iostream>
using namespace std;

template <class type>
void swapIt(type &, type &);

int main() {
	int a, b;
	char c, d;
	double e, f;

	cout << "Enter two integers to swap" << endl;
	cout << "Enter first integer : ";
	cin >> a;
	cout << "Enter second integer : ";
	cin >> b;
	cout << endl << "Before swapping : " << endl;
	cout << a << " " << b;
	swapIt(a, b);

	cout << "Enter two characters to swap" << endl;
	cout << "Enter first character : ";
	cin >> c;
	cout << "Enter second character : ";
	cin >> d;
	cout << endl << "Before swapping : " << endl;
	cout << c << " " << d;
	swapIt(c, d);

	cout << "Enter two doubles to swap" << endl;
	cout << "Enter first double : ";
	cin >> e;
	cout << "Enter second double : ";
	cin >> f;
	cout << endl << "Before swapping : " << endl;
	cout << e << " " << f;
	swapIt(e, f);
	return 0;
}

template <class type>
void swapIt(type &a, type &b) {
	a = a + b;
	b = a - b;
	a = a - b;
	cout << endl << "After swapping : " << endl;
	cout << a << " " << b;
	cout << endl << endl;
}