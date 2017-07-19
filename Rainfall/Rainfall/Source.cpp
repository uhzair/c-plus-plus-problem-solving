#include <iostream>
using namespace std;

int main() {
	double rainfall, highest, lowest, average, total = 0;
	for (int i = 1; i <= 12; i++) {
		do {
			cout << "Enter month " << i << " rainfall : ";
			cin >> rainfall;
		} while (rainfall < 0);
		if (i == 1) {
			lowest = rainfall;
			highest = rainfall;
		}
		if (highest > rainfall) {
			highest = rainfall;
		}
		if (lowest < rainfall) {
			lowest = rainfall;
		}
		total += rainfall;

	}
	average = total / 12;
	cout << "Total rainfall : " << total << endl;
	cout << "Average rainfall : " << average << endl;
	cout << "Highest rainfall : " << highest << endl;
	cout << "Lowest rainfall : " << lowest << endl;
	return 0;
}