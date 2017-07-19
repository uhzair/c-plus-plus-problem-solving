#include <iostream>
using namespace std;

int main() {
	int a, b, orig_a, orig_b, steps;
	steps = 0;
	cout << "Enter first number : ";
	cin >> a;
	while (a <= 0 || (a/10) != 0) {
		cout << "Enter a single digit positive integer : ";
		cin >> a;
	}
	orig_a = a;
	
	cout << "Enter second number : ";
	cin >> b;
	while (b <= 0 || (b / 10) != 0) {
		cout << "Enter a single digit positive integer : ";
		cin >> b;
	}
	orig_b = b;

	cout << a << " " << b;
	do {
		int temp = b;
		a = (a + b) % 10;
		b = (temp + a) % 10;
		steps += 2;
		cout << " " << a << " " << b;
	} while (orig_a != a || orig_b != b);
	cout << endl << "Steps Taken : " << steps << endl;

	return 0;
}