#include <iostream>
using namespace std;
//Matrix size
const int rowSize = 10;
const int colSize = 10;

//Function prototypes
void DisplayMenu();
void Input(int[][colSize], int &, int &);
void Transpose(int[][colSize], int &, int &);
void Insert(int[][colSize], int &, int &);
void Delete(int[][colSize], int &, int &);
void Find(int[][colSize], int , int);
void Sort(int[][colSize], int, int);
void Swap(int[][colSize], int, int);
void Display(int[][colSize], int, int);

//Main function
int main() {
	int matrix[rowSize][colSize];
	int userRows = 0;
	int userCols = 0;
	char operation;
	bool keepRunning = true;
	Input(matrix, userRows, userCols);
	cout << endl;
	DisplayMenu();
	do {
		cout << endl << "Enter operation : ";
		cin >> operation;
		switch (operation) {
		case 'T': case 't':
			Transpose(matrix, userRows, userCols);
			break;
		case 'I': case 'i':
			Insert(matrix, userRows, userCols);
			break;
		case 'D': case 'd':
			Delete(matrix, userRows, userCols);
			break;
		case 'F': case 'f':
			Find(matrix, userRows, userCols);
			break;
		case 'S': case 's':
			Sort(matrix, userRows, userCols);
			break;
		case 'W': case 'w':
			Swap(matrix, userRows, userCols);
			break;
		case 'P': case 'p':
			Display(matrix, userRows, userCols);
			break;
		case 'Q': case 'q':
			keepRunning = false;
			break;
		default:
			cout << endl << "Enter a valid option" << endl;
			DisplayMenu();
			break;
		}
	}while (keepRunning);
	return 0;
}

//Menu display function
void DisplayMenu() {
	cout << "         Matrix Operations" << endl << endl;
	cout << "Transpose        :              [T]" << endl;
	cout << "Insert           :              [I]" << endl;
	cout << "Delete           :              [D]" << endl;
	cout << "Find             :              [F]" << endl;
	cout << "Sort             :              [S]" << endl;
	cout << "Swap             :              [W]" << endl;
	cout << "Print            :              [P]" << endl;
	cout << "Quit             :              [Q]" << endl;
}

//Initial Matrix Input Function
void Input(int matrix[][colSize], int &userRows, int &userCols) {
	do {
		cout << "Enter no of rows(1-" << rowSize << ") : ";
		cin >> userRows;
	} while (userRows <= 0 || userRows > rowSize);
	do {
		cout << "Enter no of columns(1-" << colSize << ") : ";
		cin >> userCols;
	} while (userCols <= 0 || userCols > colSize);

	cout << "Enter matrix values" << endl;
	for (int i = 0; i < userRows; i++) {
		for (int j = 0; j < userCols; j++) {
			cout << "Enter matrix[" << i << "][" << j << "] value : ";
			cin >> matrix[i][j];
		}
	}
}

//Transpose Function
void Transpose(int matrix[][colSize], int &userRows, int &userCols) {
	int transpose[rowSize][colSize];
	for (int i = 0; i < userRows; i++) {
		for (int j = 0; j < userCols; j++)
		{
			transpose[j][i] = matrix[i][j];
		}
	}
	int temp = userRows;
	userRows = userCols;
	userCols = temp;
	for (int i = 0; i < userRows; i++) {
		for (int j = 0; j < userCols; j++)
		{
			matrix[i][j] = transpose[i][j];
		}
	}
}

//Insert Row Function. Used in Insert function below
void InsertRow(int matrix[][colSize], int &userRows, int &userCols) {
	if (userRows == rowSize) {
		cout << "There are no more rows left to enter" << endl;
	}else {
		int row;
		do {
			cout << "Enter index of row(0 - " << userRows-1 <<") : ";
			cin >> row;
		} while (row < 0 || row > userRows-1);
		for (int i= userRows; i >= row; i--)
		{
			for (int j = 0; j < userCols; j++) {
				matrix[i][j] = matrix[i-1][j];
				if (i == row) {
					cout << "Enter Matrix[" << i << "][" << j << "] : ";
					cin >> matrix[i][j];
				}
			}
		}
		userRows++;
		cout << "Row inserted" << endl;
	}
}

//Insert Column Function. Used in Insert function below
void InsertCol(int matrix[][colSize], int &userRows, int &userCols) {
	if (userCols == colSize) {
		cout << "There are no more columns left to enter" << endl;
	}
	else {
		int col;
		do {
			cout << "Enter index of col(0 - " << userCols-1 << ") : ";
			cin >> col;
		} while (col < 0 || col > userCols-1);
		for (int i = 0; i < userRows; i++)
		{
			for (int j = userCols; j >= col; j--) {
				matrix[i][j+1] = matrix[i][j];
				if (j == col) {
					cout << "Enter Matrix[" << i << "][" << j << "] : ";
					cin >> matrix[i][j];
				}
			}
		}
		userCols++;
		cout << "Column Inserted" << endl;
	}
}

//Main Insert Function
void Insert(int matrix[][colSize], int &userRows, int &userCols) {
	char option;
	cout << "Enter R or r to insert row OR Enter C or c to insert column : ";
	cin >> option;
	switch (option) {
	case 'R': case 'r':
		InsertRow(matrix, userRows, userCols);
		break;
	case 'C': case 'c':
		InsertCol(matrix, userRows, userCols);
		break;
	default:
		cout << "Invalid option" << endl;
		break;
	}
}

//Delete Row Function. Used in Delete function below
void DeleteRow(int matrix[][colSize], int &userRows, int &userCols) {
	if (userRows == 0) {
		cout << "No entries left to delete" << endl;
	}else{
		int row;
		do {
			cout << "Enter index of row(0 - " << userRows - 1 << ") : ";
			cin >> row;
		} while (row < 0 || row > userRows - 1);
		for (int i = row; i < userRows; i++)
		{
			for (int j = 0; j < userCols; j++) {
				matrix[i][j] = matrix[i + 1][j];
			}
		}
		userRows--;
		if (userRows == 0) {
			userCols = 0;
		}
		cout << "Row deleted" << endl;
	}
}

//Delete Column Function. Used in Delete function below
void DeleteCol(int matrix[][colSize], int &userRows, int &userCols) {
	if (userCols == 0) {
		cout << "No entries left to delete" << endl;
	}
	else {
		int col;
		do {
			cout << "Enter index of col(0 - " << userCols - 1 << ") : ";
			cin >> col;
		} while (col < 0 || col > userCols - 1);
		for (int i = col; i < userCols; i++)
		{
			for (int j = 0; j < userRows; j++) {
				matrix[j][i] = matrix[j][i+1];
			}
		}
		userCols--;
		if (userCols == 0) {
			userRows = 0;
		}
		cout << "Column deleted" << endl;
	}
}

//Main Delete Function.
void Delete(int matrix[][colSize], int &userRows, int &userCols) {
	char option;
	cout << "Enter R or r to delete row OR Enter C or c to delete column : ";
	cin >> option;
	switch (option) {
	case 'R': case 'r':
		DeleteRow(matrix, userRows, userCols);
		break;
	case 'C': case 'c':
		DeleteCol(matrix, userRows, userCols);
		break;
	default:
		cout << "Invalid option" << endl;
		break;
	}
}

//Find Function
void Find(int matrix[][colSize], int userRows, int userCols) {
	int toFind;
	int total = 0;
	cout << "Enter integer to find in matrix : ";
	cin >> toFind;
	for (int i = 0; i < userRows; i++) {
		for (int j = 0; j < userCols; j++) {
			if (matrix[i][j] == toFind) {
				cout << "Found at index : [" << i << "][" << j << "]" << endl;
				total++;
			}
		}
	}
	if (total == 0) {
		cout << "No occurence found !" << endl;
	}
}

//Sort Function For 1D Array. Used in sort function below
void sortSingle(int singleArray[], int matrix[][colSize], int userRows, int userCols) {
	int usrSize = userRows * userCols;
	int k = 0;
	for (int i = 0; i < userRows; i++) {
		for (int j = 0; j < userCols; j++) {
			singleArray[k] = matrix[i][j];
			k++;
		}
	}
	int temp = 0;
	int min_index = 0;
	for (int i = 0; i < usrSize - 1; i++) {
		min_index = i;
		for (int j = i + 1; j < usrSize; j++) {
			if (singleArray[min_index] > singleArray[j]) {
				min_index = j;
			}
		}
		temp = singleArray[i];
		singleArray[i] = singleArray[min_index];
		singleArray[min_index] = temp;
	}
}

//Sort Function For Rows. Used in sort function below
void sortRows(int matrix[][colSize], int userRows, int userCols) {
	int singleArray[rowSize * colSize];
	sortSingle(singleArray, matrix, userRows, userCols);
	int index = 0;
	for (int i = 0; i < userRows; i++) {
		for (int j = 0; j < userCols; j++) {
			matrix[i][j] = singleArray[index];
			index++;
		}
	}
	cout << "Sorted by rows" << endl;
}

//Sort Function For Cols. Used in sort function below
void sortCols(int matrix[][colSize], int userRows, int userCols) {
	int singleArray[rowSize * colSize];
	sortSingle(singleArray, matrix, userRows, userCols);
	int index = 0;
	for (int i = 0; i < userCols; i++) {
		for (int j = 0; j < userRows; j++) {
			matrix[j][i] = singleArray[index];
			index++;
		}
	}
	cout << "Sorted by cols" << endl;
}

//Main Sort Function
void Sort(int matrix[][colSize], int userRows, int userCols) {
	char sortBy;
	cout << "Enter R to sort by Rows or C to sort by Columns : ";
	cin >> sortBy;
	switch (sortBy) {
		case 'R': case 'r':
			sortRows(matrix, userRows, userCols);
			break;
		case 'C': case 'c':
			sortCols(matrix, userRows, userCols);
			break;
		default:
			cout << "Invalid option" << endl;
	}
}

//Swap Rows Function. Used below in swap function
void swapRows(int matrix[][colSize], int userRows, int userCols) {
	int swap1, swap2;
	do {
		cout << "Enter first row index to swap(0-" << userRows - 1 << ") : ";
		cin >> swap1;
	} while (swap1 < 0 || swap1 > userRows - 1);
	do {
		cout << "Enter second row index to swap : ";
		cin >> swap2;
	} while (swap2 < 0 || swap2 > userRows - 1);
	if (swap1 == swap2) {
		cout << "Pointless to swap the row with itself" << endl;
	}else {
		for (int i = 0; i < userCols; i++) {
			int temp = matrix[swap1][i];
			matrix[swap1][i] = matrix[swap2][i];
			matrix[swap2][i] = temp;
		}
		cout << "Rows Swapped" << endl;
	}
}

//Swap Columns Function.Used below in swap function
void swapCols(int matrix[][colSize], int userRows, int userCols) {
	int swap1, swap2;
	do {
		cout << "Enter first col index to swap(0-" << userCols - 1 << ") : ";
		cin >> swap1;
	} while (swap1 < 0 || swap1 > userCols - 1);
	do {
		cout << "Enter second row index to swap : ";
		cin >> swap2;
	} while (swap2 < 0 || swap2 > userCols - 1);
	if (swap1 == swap2) {
		cout << "Pointless to swap the column with itself" << endl;
	}
	else {
		for (int i = 0; i < userRows; i++) {
			int temp = matrix[i][swap1];
			matrix[i][swap1] = matrix[i][swap2];
			matrix[i][swap2] = temp;
		}
		cout << "Columns Swapped" << endl;
	}
}

//Main Swap Function
void Swap(int matrix[][colSize], int userRows, int userCols) {
	char swapWhat;
	cout << "Enter R to swap Rows or C to swap Columns : ";
	cin >> swapWhat;
	switch (swapWhat) {
	case 'R': case 'r':
		swapRows(matrix, userRows, userCols);
		break;
	case 'C': case 'c':
		swapCols(matrix, userRows, userCols);
		break;
	default:
		cout << "Invalid option" << endl;
	}
}

//Display Function
void Display(int matrix[][colSize], int userRows, int userCols) {
	cout << endl;
	for (int i = 0; i < userRows; i++) {
		for (int j = 0; j < userCols; j++) {
			cout << matrix[i][j] << "\t";
			if (j == userCols - 1) {
				cout << endl;
			}
		}
	}
}