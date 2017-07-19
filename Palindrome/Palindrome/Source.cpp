#include <iostream>
using namespace std;

int main() {
	//initialization
	int number = 0, original = 0, reversed = 0, digit = 0;
	//get user input
	cout << "Enter a positive integer : ";
	cin >> number;
	//validate user input
	while (number < 0){
		cout << "Please enter a positive integer : ";
		cin >> number;
	};
	//store user input to a diff variable
	original = number;
	//loop for all digits and add to reversed variable
	while (number != 0) {
		digit = number % 10;
		reversed = digit + (reversed * 10);
		number = number / 10;
	};
	//checked if reversed is same as user input
	if (reversed == original) {
		cout << "Entered Number is a Palindrome";
	}
	else {
		cout << "Entered Number is not a Palindrome";
	}
	cout << endl;
	return 0;
}