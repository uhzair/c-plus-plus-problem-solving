#include <iostream>
using namespace std;

void swap(int, int);
void swap(double, double);
void swap(char, char);

int main() {
	cout << "Integers Before Swapping : 1 2" << endl;
	swap(1, 2);
	cout << "Characters Before Swapping : a b" << endl;
	swap('a', 'b');
	cout << "Doubles Before Swapping : 1.5 3.8" << endl;
	swap(1.5, 3.8);
	return 0;
}

void swap(int a, int b) {
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Integers After Swapping : " << a << " " << b << endl << endl;
}

void swap(char a, char b) {
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Characters After Swapping : " << a << " " << b << endl << endl;
}

void swap(double a, double b) {
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Doubles After Swapping : " << a << " " << b << endl << endl;
}