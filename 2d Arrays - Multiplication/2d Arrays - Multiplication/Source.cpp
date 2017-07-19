#include <iostream>
using namespace std;

int main() {
	const int rowSizeM1 = 100;
	const int colSizeM1 = 100;
	const int rowSizeM2 = 100;
	const int colSizeM2 = 100;
	const int rowSizeM = 100;
	const int colSizeM = 100;
	int a[rowSizeM1][colSizeM1];
	int b[rowSizeM2][colSizeM2];
	int result[rowSizeM][colSizeM] = { 0 };
	int rows1, cols1, rows2, cols2;

	//Get M1 data
	do {
		cout << "Enter no of rows of Matrix 1 (0-100) : ";
		cin >> rows1;
	} while (rows1 < 0 || rows1 >rowSizeM1);
	do {
		cout << "Enter no of cols of Matrix 1 (0-100) : ";
		cin >> cols1;
	} while (cols1 < 0 || cols1 >colSizeM1);
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			cout << "Enter a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
	}
	//Get M2 data
	do {
		cout << "Enter no of rows of Matrix 2 (0-100) : ";
		cin >> rows2;
	} while (rows2 < 0 || rows2 >rowSizeM2);
	do {
		cout << "Enter no of cols of Matrix 2 (0-100) : ";
		cin >> cols2;
	} while (cols2 < 0 || cols2 >colSizeM2);

	for (int i = 0; i < rows2; i++) {
		for (int j = 0; j < cols2; j++) {
			cout << "Enter b[" << i << "][" << j << "] : ";
			cin >> b[i][j];
		}
	}
	//Multiply
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols2; j++) {
			for (int k = 0; k < cols1; k++) {
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	//Display
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols2; j++) {
			cout << "Result[" << i << "][" << j << "] : " << result[i][j] << endl;
		}
	}
	return 0;
}