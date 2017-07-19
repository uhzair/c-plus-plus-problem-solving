#include <iostream>
using namespace std;

int main() {
	float rateHr = 0;
	int hrsWorked = 0;
	float grossPay = 0;
	cout << "Enter rate per hour : ";
	cin >> rateHr;
	cout << "Enter no of hours worked : ";
	cin >> hrsWorked;
	grossPay = rateHr * hrsWorked;
	cout << "Gross pay of employee : " << grossPay << endl;
	return 0;
}