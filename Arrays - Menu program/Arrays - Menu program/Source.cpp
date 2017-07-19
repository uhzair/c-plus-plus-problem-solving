#include <iostream>
using namespace std;

void Insert(int[], int, int, int &);
void Delete(int[], int, int &);
void Sort(int[], int);
void Reverse(int[], int);
void Print(int[], int);

int main() {
	const int size = 100;
	int list[size];
	int usrsize = 0;
	char option = '0';
	bool keepRunning = true;

	cout << "Enter size of array : ";
	cin >> usrsize;

	while (usrsize < 0 || usrsize > size) {
		cout << "Please enter a size between 0 and 100" << endl;
		cout << "Enter size of array : ";
		cin >> usrsize;
	}

	for (int i = 0; i < usrsize; i++) {
		cout << "Enter value for index " << i << " : ";
		cin >> list[i];
	}

	cout << endl << endl;
	cout << "MENU" << endl;
	cout << "Enter i To insert into array." << endl;
	cout << "Enter d To delete from array." << endl;
	cout << "Enter s to sort array." << endl;
	cout << "Enter r to reverse array." << endl;
	cout << "Enter p to display array." << endl;
	cout << "Enter e to exit" << endl;

	while (keepRunning) {
		cout << "Enter option : ";
		cin >> option;
		switch (option) {
		case 'i':
			if (usrsize == size) {
				cout << "Maximum entries inserted, Unable to insert any more values" << endl;
			} else {
				cout << endl << endl;
				int index, val;
				cout << "Enter index to insert into : ";
				cin >> index;
				while (index < 0 || index > usrsize) {
					cout << "Please enter index between 0 and " << usrsize << endl;
					cout << "Enter index to insert into : ";
					cin >> index;
				}
				cout << "Please enter value to insert : ";
				cin >> val;
				Insert(list, index, val, usrsize);
			}
			break;

		case 'd':
			if (usrsize == 0) {
				cout << "No entries in array to delete" << endl;
			}else{
				cout << endl << endl;
				int index;
				cout << "Please enter index to delete : ";
				cin >> index;
				while (index < 0 || index > usrsize-1) {
					cout << "Please enter index between 0 and " << usrsize - 1 << endl;
					cout << "Enter index to delete : ";
					cin >> index;
				}
				Delete(list, index, usrsize);
			}
			break;

		case 's':
			if (usrsize == 0) {
				cout << "No entries in array to sort." << endl;
			}
			else {
				cout << endl << endl;
				Sort(list, usrsize);
			}
			break;

		case 'r':
			if (usrsize == 0) {
				cout << "No entries in array to reverse." << endl;
			}
			else {
				cout << endl << endl;
				Reverse(list, usrsize);
			}
			break;

		case 'p':
			if (usrsize == 0) {
				cout << "No entries in array to print." << endl;
			}
			else {
				cout << endl << endl;
				Print(list, usrsize);
			}
			break;

		case 'e':
			keepRunning = false;
			break;
		default:
			cout << "Please enter a valid option" << endl;
			break;
		}
	}
	cout << "Program exited" << endl;
	return 0;
}

void Insert(int list[], int index, int val, int &usrsize) {
	int i = usrsize;
	for (i; i >= index; i--)
	{
		list[i + 1] = list[i];
	}
	list[index] = val;
	usrsize++;
	cout << "Value inserted" << endl << endl;
}

void Delete(int list[], int index, int &usrsize) {
	for (int i = index; i < usrsize; i++)
	{
		list[i] = list[i + 1];
	}
	usrsize--;
	cout << "Value deleted" << endl << endl;
	cout << usrsize;
}

void Sort(int list[], int usrsize) {
	int temp = 0;
	int min_index = 0;
	for (int i = 0; i < usrsize - 1; i++) {
		min_index = i;
		for (int j = i + 1; j < usrsize; j++) {
			if (list[min_index] > list[j]) {
				min_index = j;
			}
		}
		temp = list[i];
		list[i] = list[min_index];
		list[min_index] = temp;
	}
	cout << "Array sorted" << endl << endl;
}

void Reverse(int list[], int usrsize) {
	int temp = 0;
	for (int i = 1; i <= usrsize / 2; i++) {
		temp = list[usrsize - i];
		list[usrsize - i] = list[i - 1];
		list[i - 1] = temp;
	}
	cout << "Array reversed" << endl << endl;
}

void Print(int list[], int usrsize) {
	cout << list[0];
	for (int i = 1; i < usrsize; i++) {
		cout << ", " << list[i];
	}
	cout << endl << endl;
}