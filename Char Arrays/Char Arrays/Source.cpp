#include <iostream>
using namespace std;

//const int Size = 10;
//bool Stricmp(char [Size], char[Size]);
int main() {
	/* Basic strings
	char uzair[4];
	cout << uzair << endl;
	cout << strlen(uzair);
	*/

	/* Getting input !!!!!!!!!!!!!!!!!!! NO RUNTIME ERROR !!!!!!!!!!!!!!!!
	char name[20];
	cout << "Enter name : ";
	cin.get(name,20);
	cout << name << endl;
	cout << name[strlen(name)] << endl;
	cout << strlen(name);
	*/

	/* Array of strings
	char names[20][20] = { "Uzair", "Musharraf", "Shehzad", "Junaid", "" };
	int i = 0;
	while (names[i] != "") {
		cout << names[i];
	}
	*/

	/* Array of string - take input and display
	char names[5][6];
	for (int i = 0; i < 5; i++) {
		do {
			cout << "Enter user " << i << "'s Name : ";
			cin >> names[i];
			if (strlen(names[i]) > 5) {
				cout << "Enter name of length less than or equal to 5 !" << endl;
			}
		} while (strlen(names[i]) > 5);
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << "names[" << i << "] = " << names[i] << endl;
	}
	*/

	/* Operations on string arrays
	char a[5][5] = { "hour", "tour", "sour", "roar"};
	cout << "a : " <<  a << endl;
	cout << "a[1] : " << a[1] << endl;
	cout << "a[1][1] : " << a[1][1] << endl;
	cout << "a[1] + 1 : " << a[1] + 1 << endl;
	cout << "(a[1] + 1) + 1 : " << (a[1] + 1) + 1 << endl;
	cout << "&a[1][1] : " << &a[1][1] << endl;
	cout << "&a[1][1] + 1 : " <<&a[1][1] + 1 << endl;
	cout << "char(a[1][1] + 1) : " << char(a[1][1] + 1);
	*/

	/* Sessional
	char words[11][50] = { "Mechanics", "keyword", "help", "please", "writing", "there", "count", "artificial", "select", "thought", "" };
	int i = 1;
	while (strcmp(words[i], "")) {
		cout << words[i] << endl
			<< words[i][3] << endl
			<< words[i] + 3 << endl
			<< &words[i][3] << endl
			<< (char)(words[i][3] + 1) << endl;
		i += 3;
	}

	*/

	/* String compare function
	char string1[Size], string2[Size];
	cout << "Enter string 1 : ";
	cin.getline(string1,Size);
	cout << "Enter string 2 : ";
	cin.getline(string2, Size);
	if (Stricmp(string1, string2) == true) {
		cout << "Same";
	}
	else {
		cout << "Different";
	}
	*/

	/*
	const int Students = 5;
	const int NameLength = 21;
	char names[Students][NameLength];
	int marks[Students];

	for (int i = 0; i < Students; i++) {
		cout << "Enter student " << i << "'s Name : ";
		cin.getline(names[i], NameLength - 1);
		cout << "Enter student " << i << "'s Marks : ";
		cin >> marks[i];
		cin.ignore();
	}

	cout << endl << endl;
	
	for (int i = 0; i < Students; i++) {
		cout << names[i] << " : " << marks[i] << endl;
	}
	*/
	cout << endl;
	return 0;
}
/*
bool Stricmp(char string1[Size],char string2[Size]) {
	bool areSame = true;
	for (int i = 0; i < Size; i++) {
		if (string1[i] != string2[i]) {
			areSame = false;
			break;
		}
	}
	return areSame;
}
*/