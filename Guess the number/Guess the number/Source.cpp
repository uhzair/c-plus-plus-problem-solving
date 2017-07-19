#include <iostream>
//#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main() {
	// initializaion
	srand(time(NULL));
	int guess = 0;
	int tries = 0;
	bool guessed = false;
	string running_answer = "N";
	bool keep_running = true;
	// keep running program until user enters N
	while (keep_running) {
		// generate random number
		int secret = rand() % 11;
		// keep running until guessed or user is out of tries
		do {
			// get user answer
			cout << "Enter a number between 0 and 10 : ";
			cin >> guess;
			// validate user answer
			while (guess < 0 || guess > 10) {
				cout << "Invalid input, Please enter a number between 0 and 10 : ";
				cin >> guess;
			};
			tries++;
			// check answer
			if (guess > secret) {
				cout << "Too big" << endl;
			}
			else if (guess < secret) {
				cout << "Too small" << endl;
			}
			else {
				cout << "Congratulations, Your guess is correct !" << endl;
				guessed = true;
			}
			// if user has failed to guess in three tries
			if (guessed == false && tries == 3) {
				cout << "Sorry, You ran out of tries." << endl << "Correct answer was : " << secret << endl;
			}
		} while (guessed == false && tries < 3);
		// ask if user wants to play again
		cout << "Do you want to play again ? [Y/N] : ";
		cin >> running_answer;
		// answer validation
		while (running_answer != "Y" && running_answer != "y" && running_answer != "N" && running_answer != "n") {
			cout << "Please enter Y or N : ";
			cin >> running_answer;
		}
		if (running_answer == "N" || running_answer == "n") {
			// if user doesn't want to play anymore, exit loop.
			keep_running = false;
		}
		else {
			// if user wants to play, reset variables.
			guessed = false;
			tries = 0;
			guess = 0;
		}
	};
	return 0;
}