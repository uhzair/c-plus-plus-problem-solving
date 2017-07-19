#include <iostream>
using namespace std;

int main() {
	//initialization
	int average = 0;
	int num_of_students = 0;
	int sum_of_ages = 0;
	//get user input
	cout << "Enter total number of students : ";
	cin >> num_of_students;
	//validate input
	while (num_of_students <= 0) {
		cout << "Please enter a positive number : ";
		cin >> num_of_students;
	}
	//loop for all students;
	for (int i = 1; i <= num_of_students; i++) {
		//get current student's age
		int current_age = 0;
		cout << "Enter student " << i << "'s Age : ";
		cin >> current_age;
		//validate
		while (current_age <= 0) {
			cout << "Enter a valid age : ";
			cin >> current_age;
		}
		//add to sum
		sum_of_ages += current_age;
	}
	//calculate average
	average = sum_of_ages / num_of_students;
	cout << "Average age of all students : " << average << endl;
	return 0;
}