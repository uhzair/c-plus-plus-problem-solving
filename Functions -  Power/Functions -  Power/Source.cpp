#include <iostream>
using namespace std;

double calcPower(double, int);
int main() {
	double base = 0;
	int power = 0;
	double answer = 0;
	cout << "Enter base : ";
	cin >> base;
	cout << "Enter power : ";
	cin >> power;
	while (power < 0) {
		cout << "Enter a non-negative power : ";
		cin >> power;
	}
	if (power == 0 || power == 1) {
		answer = 1;
	}else if (power == 1) {
		answer = base;
	}else {
		for (int i = power; i >= 0; i--) {
			answer += calcPower(base, i);
		}
	}
	cout << "Answer of sequence is : " << answer << endl;
	return 0;
}
double calcPower(double base, int power) {
	int answer = 1;
	for (int i = 1; i <= power; i++) {
		answer *= base;
	}
	return answer;
}