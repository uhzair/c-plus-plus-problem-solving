#include <iostream>
using namespace std;

const int colSize = 24;
void findAndDisplay(float matrix[][colSize], int rowSize);

int main() {
	const int rowSize = 7;
	float matrix[rowSize][colSize];
	cout << "Enter temperature values" << endl;
	for (int i = 0; i < rowSize; i++) {
		for(int j = 0; j < colSize; j++) {
			cout << "Enter day " << i+1 << " hour " << j+1 << " temperature : ";
			cin >> matrix[i][j];
		}
	}
	findAndDisplay(matrix, rowSize);
	cout << endl;
	for (int i = 0; i < rowSize; i++) {
		cout << "DAY " << i+1 << " :\t";
		for (int j = 0; j < colSize; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}

void findAndDisplay(float matrix[][colSize], int rowSize) {
	float highest;
	float lowest;
	int  high_day;
	int high_hour;
	int low_day;
	int low_hour;

	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			if (i == 0 && j == 0) {
				highest = matrix[i][j];
				lowest = matrix[i][j];
				high_day = i;
				high_hour = j;
				low_day = i;
				low_hour = j;
			}
			if (matrix[i][j] < lowest) {
				lowest = matrix[i][j];
				low_day = i;
				low_hour = j;
			}
			if (matrix[i][j] > highest) {
				highest = matrix[i][j];
				high_day = i;
				high_hour = j;
			}
		}
	}
	cout << endl;
	cout << "Lowest temperature was " << lowest << " on day " << low_day << " hour " << low_hour << endl;
	cout << "Highest temperature was " << highest << " on day " << high_day << " hour " << high_hour << endl;
}