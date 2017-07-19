#include <iostream>
using namespace std;

void takeInput(int [], int, int);
void display(int [], int);

int main() {
	const int rowSize = 100;
	const int colSize = 100;
	int a[rowSize][colSize];
	int b[rowSize][colSize];
	int sum[rowSize][colSize];
	int rows, cols;

	do {
		cout << "Enter no of rows (0-100) : ";
		cin >> rows;
	} while (rows < 0 || rows >100);
	do {
		cout << "Enter no of cols (0-100) : ";
		cin >> cols;
	} while (cols < 0 || cols >100);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "Enter a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "Enter b[" << i << "][" << j << "] : ";
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "Sum[" << i << "][" << j << "] : " << sum[i][j] << endl;
		}
	}
	cout << endl;
	return 0;
}