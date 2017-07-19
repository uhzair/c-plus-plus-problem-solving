#include <iostream>
using namespace std;

int main() {
	//initialization
	int num_of_lines = 0;
	//get user input
	cout << "No. of lines of stars to print : ";
	cin >> num_of_lines;
	//main loop
	for (int line_count = 1; line_count <= num_of_lines; line_count++) {
		//spaces loop
		for (int space_count = num_of_lines - line_count; space_count >= 0; space_count--) {
			cout << " ";
		}
		//stars loop
		for (int star_count = 1; star_count <= line_count; star_count++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}