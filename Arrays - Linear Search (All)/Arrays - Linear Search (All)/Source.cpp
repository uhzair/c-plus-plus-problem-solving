#include <iostream>
using namespace std;

int main() {
	const int size = 10;
	int values[size] = { 65,78,65,49,32,-7,19,0,34,-7 };
	int num = 0;
	int occurenceCount = 0;
	cout << "Enter number to search : ";
	cin >> num;
	for (int i = 0; i < size; i++) {
		if (values[i] == num) {
			cout << num << " found at location : " << i << endl;
			occurenceCount++;
		}
	}
	if (occurenceCount == 0) {
		cout << num << " not found in array" << endl;
	}
	return 0;
}