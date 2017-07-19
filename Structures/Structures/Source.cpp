#include <iostream>
using namespace std;

const int Size = 3;
struct Students {
	char name[21];
	int age;
	double marks;
};

void getData(Students &, int, int);
void printData(Students);
int averageAge(Students []);
void sortArr(Students[]);

int main() {
	Students arr[Size];
	int total;
	
	do {
		cout << "Enter total marks : ";
		cin >> total;
		if (total <= 0) {
			cout << "Please enter valid total marks." << endl;
		}
	} while (total <= 0);

	for (int i = 0; i < Size; i++) {
		getData(arr[i], i, total);
	}

	cout << endl;
	cout << "Average Age : " << averageAge(arr) << endl;
	
	sortArr(arr);

	cout << "Highest Marks : " << arr[Size-1].marks << endl;
	cout << "Second Highest Marks : " << arr[Size - 2].marks << endl;
	return 0;
}

void getData(Students &student, int i, int total) {
	do {
		cout << "Enter student " << i << "'s Name : ";
		cin >> student.name;
		if (strlen(student.name) >= 21) {
			cout << "Student name must be of 20 characters or less." << endl;
		}
	} while (strlen(student.name) >= 21);
	do {
		cout << "Enter student " << i << "'s Age : ";
		cin >> student.age;
		if (student.age <= 0) {
			cout << "Please enter a valid age." << endl;
		}
	} while (student.age <= 0);
	do {
		cout << "Enter student " << i << "'s Marks : ";
		cin >> student.marks;
	} while (student.marks <0 || student.marks > total);
}

void printData(Students student) {
	cout << "Student's Name : " << student.name << endl;
	cout << "Student's Age : " << student.age << endl;
	cout << "Student's Marks : " << student.marks << endl;
}

int averageAge(Students arr[Size]) {
	int Sum = 0;
	for (int i = 0; i < Size; i++) {
		Sum += arr[i].age;
	}
	return Sum / Size;
}

void sortArr(Students arr[Size]) {
	double temp;
	for (int i = 0; i < Size - 1; i++)
	{
		for (int j = 0; j < Size - i - 1; j++)
		{
			if (arr[j].marks > arr[j + 1].marks)
			{
				temp = arr[j].marks;
				arr[j].marks = arr[j + 1].marks;
				arr[j + 1].marks = temp;
			}
		}
	}

}