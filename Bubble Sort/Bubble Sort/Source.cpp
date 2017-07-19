#include <iostream>
using namespace std;

void bubbleSort(int [], int);

int main() {
	const int size = 10;
	int list[size] = { 5, 1, 9, 0, 8, 6, 7, 4, 3, 2 };
	bubbleSort(list, size);
	cout << list[0];
	for (int i = 1; i < size; i++) {
		cout << "," << list[i];
	}
	cout << endl;
	return 0;
}

void bubbleSort(int list[], int size) {
	int temp;
	for (int i=0; i < size - 1; i++)
	{
		for (int j=0; j < size - i - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}