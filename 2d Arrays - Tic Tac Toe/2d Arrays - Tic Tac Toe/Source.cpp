#include <iostream>
using namespace std;

void drawBoard(char board[][3]);
void makeMove(char[][3], char, int, int, bool &);
bool checkWin(char board[][3]);
bool checkDraw(char board[][3]);

int main() {
	int player = 1;
	char mark = 'X';
	int row, col;
	bool won = false;
	bool draw = false;
	bool badEntry = false;
	char board[3][3] = {
							{'v','v','v'},
							{ 'v','v','v' },
							{ 'v','v','v' }
						};
	drawBoard(board);
	do {
		badEntry = false;
		cout << "Player " << player << " Enter row and column : ";
		cin >> row >> col;
		while ((row < 0 || row > 2) || (col < 0 || col > 2)) {
			cout << "Invalid choice - try again" << endl;
			cout << "Player " << player << " Enter row and column : ";
			cin >> row >> col;
		}
		mark = player == 1 ? 'X' : 'O';
		makeMove(board, mark, row, col, badEntry);
		if (!badEntry) {
			won = checkWin(board);
			if (!won) {
				draw = checkDraw(board);
				player = player == 1 ? 2 : 1;
			}
			cout << endl;
			drawBoard(board);
		}
		cout << endl;

	} while (won == false && draw == false);

	won ? cout << "Player " << player << " Wins !" : cout << "Tie!";
	cout << endl;
}

void drawBoard(char board[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "\t" << board[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void makeMove(char board[][3], char mark, int row, int col, bool &badEntry) {
	if (board[row][col] == 'v') {
		board[row][col] = mark;
	}else {
		cout << "Invalid choice - try again";
		badEntry = true;
	}
}

bool checkWin(char board[][3]) {
	if (board[0][0] != 'v' && (board[0][0] == board[0][1] && board[0][1] == board[0][2])) {
		return true;
	}else if (board[1][0] != 'v' && (board[1][0] == board[1][1] && board[1][1] == board[1][2])) {
		return true;
	}else if (board[2][0] != 'v' && (board[2][0] == board[2][1] && board[2][1] == board[2][2])) {
		return true;
	}else if (board[0][0] != 'v' && (board[0][0] == board[1][0] && board[1][0] == board[2][0])) {
		return true;
	}else if (board[0][1] != 'v' && (board[0][1] == board[1][1] && board[1][1] == board[2][1])) {
		return true;
	}else if (board[0][2] != 'v' && (board[0][2] == board[1][2] && board[1][2] == board[2][2])) {
		return true;
	}else if (board[0][0] != 'v' && (board[0][0] == board[1][1] && board[1][1] == board[2][2])) {
		return true;
	}else if (board[0][2] != 'v' && (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
		return true;
	}
	return false;
}

bool checkDraw(char board[][3]) {
	if (board[0][0] != 'v' && board[0][1] != 'v' && board[0][2] != 'v' && board[1][0] != 'v' && board[1][1] != 'v' && board[1][2] != 'v' && board[2][0] != 'v' && board[2][1] != 'v' && board[2][2] != 'v') {
		return true;
	}
	return false;
}