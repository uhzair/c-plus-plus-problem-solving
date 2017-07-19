#include <iostream>
using namespace std;

void input(int &, int &);
int multiply(int, int);

int main() {
	int num = 0;
	int calcUpto = 0;
	input(num, calcUpto);
	for (int i = 1; i <= calcUpto; i++) {
		cout << num << " x " << i << " = " << multiply(num,i) << endl;
	}
	return 0;
}

void input(int &num, int &calcUpto) {
	cout << "Enter num to calculate table of : ";
	cin >> num;
	do {
		cout << "Enter num to calculate the table up to : ";
		cin >> calcUpto;
	} while (calcUpto <= 0);
}

int multiply(int num, int multiplyBy) {
	return num * multiplyBy;
}