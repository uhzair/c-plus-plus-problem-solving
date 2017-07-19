#include <iostream>
using namespace std;

void printPattern(char = '*' , int = 30);
void printPattern(int, int);

int main() {
	char a;
	int b;
	cout << "Enter character to print : ";
	cin >> a;
	cout << "Enter how many times to print : ";
	cin >> b;
	while (b <= 0) {
		cout << "Enter valid number of times to print : ";
		cin >> b;
	}
	cout << "Char printed with provided arguments" << endl;
	printPattern(a,b);
	cout << "Int printed with arguments" << endl;
	printPattern(5, 30);
	cout << "Char printed with default arguments" << endl;
	printPattern();
	return 0;
}

void printPattern(char a, int b) {
	for (int i = 1; i <= b; i++) {
		cout << a;
	}
	cout << endl << endl;
}
void printPattern(int a, int b) {
	for (int i = 1; i <= b; i++) {
		cout << a;
	}
	cout << endl << endl;
}