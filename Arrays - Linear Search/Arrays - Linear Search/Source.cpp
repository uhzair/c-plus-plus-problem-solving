#include <iostream>
using namespace std;

bool searchInArray(int values[], int, int, int &);

int main() {
	const int size = 10;
	int values[size] = {65,78,65,49,32,67,19,0,34,-7};
	int num = 0;
	int index = 0;
	cout << "Enter number to search : ";
	cin >> num;
	bool found = searchInArray(values, size, num, index);
	if (found) {
		cout << num << " found at location : " << index << endl;
	}
	else {
		cout << num << " not found in array" << endl;
	}
	return 0;
}

bool searchInArray(int values[], int size, int num, int &index) {
	bool found = false;
	for (index = 0; index < size; index++) {
		if (values[index] == num) {
			found = true;
			break;
		}
	}
	return found;
}