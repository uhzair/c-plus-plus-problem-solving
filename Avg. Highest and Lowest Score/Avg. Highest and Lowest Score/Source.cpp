#include <iostream>
using namespace std;

int main() {
	//initialization
	int sum_of_all = 0;
	int num_of_students = 0;
	int average = 0;
	int highest = 0;
	int lowest = 0;
	int total = 0;
	//Get total marks
	cout << "Please enter total marks of exam : ";
	cin >> total;
	//Validate total marks
	while (total <= 0) {
		cout << "Please enter a positive integer : ";
		cin >> total;
	};
	lowest = total;
	//Get number of students
	cout << "Please enter number of students : ";
	cin >> num_of_students;
	//Validate number of students
	while (num_of_students <= 0) {
		cout << "Please enter a positive integer : ";
		cin >> num_of_students;
	};
	//Get student scores
	cout << "Enter student scores one by one." << endl;
	//Loop for number of students
	for (int i = 1; i <= num_of_students; i++) {
		//Get current student score
		int current_score = 0;
		cout << "Enter student " << i << " score : ";
		cin >> current_score;
		//Validate current student score
		while (current_score < 0 || current_score > total) {
			cout << "Please enter a score between 0 and " << total << " : ";
			cin >> current_score;
		};
		//Add current score to total and check if loweset or highest score
		sum_of_all += current_score;
		if (current_score < lowest) {
			lowest = current_score;
		}
		if (current_score > highest) {
			highest = current_score;
		}
	}
	//Calculate average and display result
	average = sum_of_all / num_of_students;
	cout << "Average score is : " << average << endl;
	cout << "Highest score is : " << highest << endl;
	cout << "Lowest score is : " << lowest << endl;
}