#include <iostream>
using namespace std;

int binarySearch(int[], int, int);

int main() {
	const int size = 10;
	int list[size] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int val = 0;
	cout << "Enter value to search : ";
	cin >> val;
	int location = binarySearch(list, size, val);
	if (location == -1) {
		cout << "Number not found in array" << endl;
	}else {
		cout << "Number found in array at index " << location << endl;
	}
	return 0;
}

int binarySearch(int list[], int size, int val) {
	int first = 0;
	int last = size - 1;
	int mid = 0;
	while (first <= last) {
		mid = (first + last) / 2;
		if (list[mid] < val) {
			first = mid + 1;
		}
		else if (list[mid] > val) {
			last = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}