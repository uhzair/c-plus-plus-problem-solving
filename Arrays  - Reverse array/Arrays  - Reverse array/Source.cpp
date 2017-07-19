#include <iostream>
using namespace std;

void reverseArray(int [], int);
int main() {
	const int size = 6;
	int list[size] = { 1,6,7,9,2,5 };
	reverseArray(list, size);
	cout << list[0];
	for (int i = 1; i < size; i++) {
		cout << "," << list[i];
	}
	cout << endl;
	return 0;
}

void reverseArray(int list[], int size) {
	int temp = 0;
	for (int i = 1; i <= size/2; i++) {
		temp = list[size-i];
		list[size - i] = list[i-1];
		list[i-1] = temp;
	}
}