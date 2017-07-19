#include <iostream>
using namespace std;

void getData(int&, double&, double&, double&);
void getData(double&, double&);
double calculate(int, double, double, double);
double calculate(double, double);

int main() {
	int days, patienttype;
	double dailyrate, srvchrg, medchrg;
	do {
		cout << "Enter 1 for in-patient and 0 for out-patient : ";
		cin >> patienttype;
	} while (patienttype < 0 || patienttype > 1);
	if (patienttype == 1) {
		getData(days, dailyrate, srvchrg, medchrg);
		cout << "Total bill is : " << calculate(days, dailyrate, srvchrg, medchrg);
	}
	else {
		getData(srvchrg, medchrg);
		cout << "Total bill is : " << calculate(srvchrg, medchrg);
	}
	cout << endl;
	return 0;

}

void getData(int& days, double& dailyrate, double& srvchrg, double& medchrg) {
	do {
		cout << "Enter no. of days stayed : ";
		cin >> days;
	} while (days <= 0);
	do {
		cout << "Enter daily charge : ";
		cin >> dailyrate;
	} while (dailyrate <= 0);
	do {
		cout << "Enter service charge : ";
		cin >> srvchrg;
	} while (srvchrg <= 0);
	do {
		cout << "Enter medical charge : ";
		cin >> medchrg;
	} while (medchrg <= 0);
}
void getData(double& srvchrg, double& medchrg) {
	do {
		cout << "Enter service charge : ";
		cin >> srvchrg;
	} while (srvchrg <= 0);
	do {
		cout << "Enter medical charge : ";
		cin >> medchrg;
	} while (medchrg <= 0);
}
double calculate(int days, double dailyrate, double srvchrg, double medchrg) {
	double total = srvchrg + medchrg;
	total += days * dailyrate;
	return total;
}
double calculate(double srvchrg, double medchrg) {
	double total = srvchrg + medchrg;
	return total;
}