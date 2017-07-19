#include <iostream>
using namespace std;

int main() {
	int num = 0;
	do {
		cout << "Enter a positive integer : ";
		cin >> num;
	} while (num <= 0);
	for (int i = 2; i <= num; i++) {
		int divisor = 2;
		int limit = sqrt(i);
		int isPrime = true;
		while (divisor <= limit && isPrime) {
			if (i % divisor == 0) {
				isPrime = false;
			}
			else {
				divisor++;
			}
		}
		if (isPrime) {
			cout << i << " is prime." << endl;
		}
	}
	return 0;
}