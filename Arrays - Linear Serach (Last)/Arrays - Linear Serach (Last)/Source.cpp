#include <iostream>
using namespace std;

bool searchInArray(int [], int, int, int &);

int main() {
	const int size = 10;
	int values[size] = { 65,78,65,49,32,-7,19,0,34,-7 };
	int num = 0;
	bool found = false;
	int foundAt = 0;

	cout << "Enter number to search : ";
	cin >> num;
	
	found = searchInArray(values, size, num, foundAt);
	if (found) {
		cout << "last occurence of " << num << " found at location: " << foundAt << endl;
	}else {
		cout << num << " not found in array" << endl;
	}
	return 0;
}

bool searchInArray(int values[], int size, int num, int &foundAt) {
	bool found = false;
	for (foundAt = size - 1; foundAt >=0 ; foundAt--) {
		if (values[foundAt] == num) {
			found = true;
			break;
		}
	}
	return found;
}