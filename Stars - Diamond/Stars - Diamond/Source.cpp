#include <iostream>
using namespace std;

int main() {
	int num_of_lines = 1;
	cout << "Enter an odd number of lines to print : ";
	cin >> num_of_lines;
	while (num_of_lines <= 0 || num_of_lines % 2 == 0) {
		cout << "Enter an odd number of lines to print : ";
		cin >> num_of_lines;
	};
	//For loop for first half
	for (int line_count = 1; line_count <= num_of_lines / 2; line_count++) {
		//For loop for spaces
		for (int space_count = (num_of_lines / 2) - line_count; space_count >= 0; space_count--) {
			cout << " ";
		}
		//For loop for stars
		for (int star_count = 1; star_count <= (2 * line_count) - 1; star_count++) {
			cout << "*";
		}
		cout << endl;
	}
	//For loop for second half
	for (int line_count = num_of_lines / 2; line_count >= 0; line_count--) {
		//For loop for spaces
		for (int space_count = (line_count - num_of_lines / 2) + 1; space_count <= 0; space_count++) {
			cout << " ";
		}
		//For loop for stars
		for (int star_count = line_count*2; star_count >= 0; star_count--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}