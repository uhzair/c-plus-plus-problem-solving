#include <iostream>
using namespace std;

int main() {
	//initialization
	int num_of_lines = 0;
	//get user input
	cout << "Enter no of lines to print : ";
	cin >> num_of_lines;
	//validate user input
	while (num_of_lines <= 0) {
		cout << "Enter no of lines to print : ";
		cin >> num_of_lines;
	};
	//loop for number of lines
	for (int line_count = num_of_lines; line_count >= 1; line_count--) {
		//loop for spaces
		for (int space_count = num_of_lines; space_count > line_count; space_count--) {
			cout << " ";
		}
		//loop for stars
		for (int star_count = 1; star_count <= line_count; star_count++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}