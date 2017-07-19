#include <iostream>
using namespace std;

int main() {
	int count = 0;
	bool isCalculated = false;
	int a = 0;
	int b = 0;
	cout << "Enter divisor (a) : ";
	cin >> a;
	cout << "Enter dividend (b) : ";
	cin >> b;
	cout << endl;
	while (isCalculated == false) {
		cout << "b before subtraction : " << b << endl;
		b = b - a;
		cout << "b after subtraction : " << b << endl;
		if (b >= 0) {
			cout << "b is greater than or equal to zero, increment count and go to condition." << endl;
			count++;
			cout << "Counter : " << count << endl;
		}else {
			cout << "b is now less than zero so division is complete" << endl;
			isCalculated = true;
		}
		cout << endl;
	}
	cout << "b/a = " << count << endl;
}