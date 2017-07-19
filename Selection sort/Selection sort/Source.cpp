#include <iostream>
using namespace std;

void selectionSort(int [], int);
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
	int temp = 0;
	int min_index = 0;
	for (int i = 0; i < size-1; i++) {
		min_index = i;
		for (int j = i + 1; j < size; j++) {
			if (list[min_index] > list[j]) {
				min_index = j;
			}
		}
		temp = list[i];
		list[i] = list[min_index];
		list[min_index] = temp;
	}
}