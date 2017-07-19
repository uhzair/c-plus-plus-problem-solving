#include <iostream>
using namespace std;

const int colSize = 8;
void Input(int[][colSize], int);
bool checkRows(int[][colSize], int);
bool checkCols(int[][colSize], int);
bool checkDiags(int[][colSize], int);
bool isMagic(int [][colSize], int);

int main() {
	const int rowSize = 8;
	int matrix[rowSize][colSize];
	Input(matrix, rowSize);
	bool isMagicSquare = isMagic(matrix, rowSize);
	if (isMagicSquare) {
		cout << "Matrix is a magic square";
	}else {
		cout << "Matrix is not a magic square";
	}
	cout << endl;
	return 0;
}

void Input(int matrix[][colSize], int rowSize) {
	cout << "Enter matrix values" << endl;
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			cout << "Enter matrix[" << i << "][" << j << "] value : ";
			cin >> matrix[i][j];
		}
	}
}

bool checkRows(int matrix[][colSize], int rowSize) {
	int currRowSum = 0;
	int prevRowSum = 0;
	bool rowsEqual = true;
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			currRowSum += matrix[i][j];
			if (i == 0) {
				prevRowSum += matrix[i][j];
			}
		}
		if (currRowSum == prevRowSum) {
			prevRowSum = currRowSum;
			currRowSum = 0;
		} else {
			rowsEqual = false;
			break;
		}
	}
	return rowsEqual;
}

bool checkCols(int matrix[][colSize], int rowSize) {
	int currColSum = 0;
	int prevColSum = 0;
	bool colsEqual = true;
	for (int i = 0; i < colSize; i++) {
		for (int j = 0; j < rowSize; j++) {
			currColSum += matrix[i][j];
			if (i == 0) {
				prevColSum += matrix[i][j];
			}
		}
		if (currColSum == prevColSum) {
			prevColSum = currColSum;
			currColSum = 0;
		}else {
			colsEqual = false;
			break;
		}
	}
	return colsEqual;
}

bool checkDiags(int matrix[][colSize], int rowSize) {
	int leftDiagSum = 0;
	int rightDiagSum = 0;
	bool diagsEqual = true;
	int j = -1;
	for (int i = 0; i < colSize; i++) {
		leftDiagSum += matrix[i][++j];
	}
	j = colSize;
	for (int i = 0; i < colSize; i++) {
		rightDiagSum += matrix[i][--j];
	}
	if (rightDiagSum == leftDiagSum) {
		return true;
	}else {
		return false;
	}
}

bool isMagic(int matrix[][colSize], int rowSize) {
	bool isMagicSquare = false;
	bool rowsEqual = checkRows(matrix, rowSize);
	if (rowsEqual) {
		bool colsEqual = checkCols(matrix, rowSize);		
		if (colsEqual) {
			bool diagsEqual = checkDiags(matrix, rowSize);
			if (diagsEqual) {
				isMagicSquare = true;
			}
		}
	}
	return isMagicSquare;
}