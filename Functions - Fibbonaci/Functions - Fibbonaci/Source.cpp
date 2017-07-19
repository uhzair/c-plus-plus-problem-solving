#include <iostream>
using namespace std;

void input(int &);
void calculateAndDisplay(int, int, int, int);

int main() {
	int calcTill = 0;
	int first = 0;
	int second = 1;
	int next = 1;
	input(calcTill);
	calculateAndDisplay(calcTill, first, second, next);
	cout << endl;
	return 0;
}

void input(int &calcTill) {
	do {
		cout << "Calc Fibonacci sequence upto : ";
		cin >> calcTill;
	} while (calcTill <= 0);
}

void calculateAndDisplay(int calcTill, int first, int second, int next) {
	cout << "\n" << first << ", " << second;
	while (next <= calcTill)
	{
		cout << ", " << next;
		first = second;
		second = next;
		next = first + second;
	}
	cout << "\n";
}