#include <iostream>
using namespace std;

void selectionSort(int[], int);
int main() {
	const int size = 10;
	int list[size] = { 5, 1, 9, 0, 8, 6, 7, 4, 3, 2 };
	selectionSort(list, size);
	cout << list[0];
	for (int k = 1; k < size; k++) {
		cout << "," << list[k];
	}
	cout << endl;
}

void selectionSort(int list[], int size) {
	int max_index = 0;
	int temp = 0;
	for (int i = size; i > 1; i--) {
		max_index = 0;
		for (int j = 1; j < i; j++) {
			if (list[j] > list[max_index]) {
				max_index = j;
			}
		}
		temp = list[i - 1];
		list[i - 1] = list[max_index];
		list[max_index] = temp;
	}
}