#include <iostream>
using namespace std;

int sum(int);
int main() {
	int n;
	cout << "Enter integer to sum up to : ";
	cin >> n;
	while (n < 0) {
		cout << "Enter valid number to summ up to : ";
		cin >> n;
	}
	cout << "Sum of all integers from 1 to " << n << " : " << sum(n) <<endl;

	return 0;
}

int sum(int n) {
	if (n == 0) {
		return 0;
	}else {
		return (sum(n - 1) + (n));
	}
}