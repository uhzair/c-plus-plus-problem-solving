#include <iostream>
using namespace std;

int fibonacci(int);
int main() {
	int n = 0;
	cout << "Enter number of terms to calculate : ";
	cin >> n;
	while (n < 0) {
		cout << "Enter valid number of terms to calculate : ";
		cin >> n;
	}
	cout << endl << fibonacci(0);
	for (int i = 1; i <= n; i++) {
		cout <<  ", " << fibonacci(i);
	}
	cout << endl << endl;
	return 0;
}

int fibonacci(int n) {
	if (n == 0) {
		return 0;
	}else if (n == 1) {
		return 1;
	}else{
		return(fibonacci(n - 2) + fibonacci(n - 1));
	}
}