#include <iostream>
using namespace std;

void input(int &);
int calcFact(int);
void output(int, int);

int main() {
	int num = 0;
	int fact = 0;
	input(num);
	fact = calcFact(num);
	output(num, fact);
	return 0;
}
void input(int &val) {
	cout << "Enter positive integer : ";
	cin >> val;
	while (val <= 0) {
		cout << "Enter a valid positive integer : ";
		cin >> val;
	}
}

int calcFact(int val) {
	int fact = 1;
	for (int i = 1; i <= val; i++) {
		fact = i*fact;
	}
	return fact;
}

void output(int val, int fact) {
	cout << "Factorial of " << val << " is : " << fact << endl;
}