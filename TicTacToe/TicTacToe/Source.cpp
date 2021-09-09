#include<iostream>
#include<vector>
using namespace std;

bool player1Win(vector<char> ticTacToeBoard) {
	bool player1Victory = false;

	if (ticTacToeBoard[1] == 'X' && ticTacToeBoard[2] == 'X' && ticTacToeBoard[3] == 'X') {
		player1Victory = true;
	}
	else if (ticTacToeBoard[4] == 'X' && ticTacToeBoard[5] == 'X' && ticTacToeBoard[6] == 'X') {
		player1Victory = true;
	}
	else if (ticTacToeBoard[8] == 'X' && ticTacToeBoard[7] == 'X' && ticTacToeBoard[9] == 'X') {
		player1Victory = true;
	}
	else if (ticTacToeBoard[1] == 'X' && ticTacToeBoard[4] == 'X' && ticTacToeBoard[7] == 'X') {
		player1Victory = true;
	}
	else if (ticTacToeBoard[2] == 'X' && ticTacToeBoard[5] == 'X' && ticTacToeBoard[8] == 'X') {
		player1Victory = true;
	}
	else if (ticTacToeBoard[3] == 'X' && ticTacToeBoard[6] == 'X' && ticTacToeBoard[9] == 'X') {
		player1Victory = true;
	}
	else if (ticTacToeBoard[1] == 'X' && ticTacToeBoard[5] == 'X' && ticTacToeBoard[9] == 'X') {
		player1Victory = true;
	}
	else if (ticTacToeBoard[3] == 'X' && ticTacToeBoard[5] == 'X' && ticTacToeBoard[7] == 'X') {
		player1Victory = true;
	}
	return player1Victory;
}

bool player2Win(vector<char> ticTacToeBoard) {
	bool player2Victory = false;

	if (ticTacToeBoard[1] == 'O' && ticTacToeBoard[2] == 'O' && ticTacToeBoard[3] == 'O') {
		player2Victory = true;
	}
	else if (ticTacToeBoard[4] == 'O' && ticTacToeBoard[5] == 'O' && ticTacToeBoard[6] == 'O') {
		player2Victory = true;
	}
	else if (ticTacToeBoard[7] == 'O' && ticTacToeBoard[8] == 'O' && ticTacToeBoard[9] == 'O') {
		player2Victory = true;
	}
	else if (ticTacToeBoard[1] == 'O' && ticTacToeBoard[4] == 'O' && ticTacToeBoard[7] == 'O') {
		player2Victory = true;
	}
	else if (ticTacToeBoard[2] == 'O' && ticTacToeBoard[5] == 'O' && ticTacToeBoard[8] == 'O') {
		player2Victory = true;
	}
	else if (ticTacToeBoard[3] == 'O' && ticTacToeBoard[6] == 'O' && ticTacToeBoard[9] == 'O') {
		player2Victory = true;
	}
	else if (ticTacToeBoard[1] == 'O' && ticTacToeBoard[5] == 'O' && ticTacToeBoard[9] == 'O') {
		player2Victory = true;
	}
	else if (ticTacToeBoard[3] == 'O' && ticTacToeBoard[5] == 'O' && ticTacToeBoard[7] == 'O') {
		player2Victory = true;
	}
	return player2Victory;
}

bool GameIsADraw(vector<char> ticTacToeBoard) {
	bool draw = false;

	if (ticTacToeBoard[1] != '1' && ticTacToeBoard[2] != '2' && ticTacToeBoard[3] != '3' &&
		ticTacToeBoard[4] != '4' && ticTacToeBoard[5] != '5' && ticTacToeBoard[6] != '6' &&
		ticTacToeBoard[7] != '7' && ticTacToeBoard[8] != '8' && ticTacToeBoard[9] != '9') {
		
		draw = true;
	}

	return draw;
}

void DrawBoard(vector<char> ticTacToeBoard) {
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X) - Player 2(O)" << endl << endl;
	cout << endl;

	cout << "      |     |     " << endl;
	cout << "   " << ticTacToeBoard.at(1) << "  |  " << ticTacToeBoard.at(2) << "  |  " << ticTacToeBoard.at(3) << endl;
	cout << " _____|_____|_____" << endl;
	cout << "      |     |     " << endl;
	cout << "   " << ticTacToeBoard.at(4) << "  |  " << ticTacToeBoard.at(5) << "  |  " << ticTacToeBoard.at(6) << endl;
	cout << " _____|_____|_____" << endl;
	cout << "      |     |     " << endl;
	cout << "   " << ticTacToeBoard.at(7) << "  |  " << ticTacToeBoard.at(8) << "  |  " << ticTacToeBoard.at(9) << endl;
	cout << "      |     |     " << endl;
	return;
}

int main() {
	bool player1Victory = false;
	bool player2Victory = false;
	bool gameDrawn = false;
	vector<char> ticTacToeBoard(10);
	int player1Position = 0;
	int player2Position = 0;

	ticTacToeBoard.at(0) = '0';
	ticTacToeBoard.at(1) = '1';
	ticTacToeBoard.at(2) = '2';
	ticTacToeBoard.at(3) = '3';
	ticTacToeBoard.at(4) = '4';
	ticTacToeBoard.at(5) = '5';
	ticTacToeBoard.at(6) = '6';
	ticTacToeBoard.at(7) = '7';
	ticTacToeBoard.at(8) = '8';
	ticTacToeBoard.at(9) = '9';

	while (player1Victory != true || player2Victory != true || gameDrawn != true) {
		DrawBoard(ticTacToeBoard);

		cout << "\nPlayer 1 which number you would like to place your symbol: ";
		cin >> player1Position;
		cout << endl;

		if (player1Position <= 3) {
			ticTacToeBoard.at(player1Position) = 'X';
			if (player1Win(ticTacToeBoard) == true) {
				player1Victory = true;
			}
		}
		else if (player1Position <= 6) {
			ticTacToeBoard.at(player1Position) = 'X';
			if (player1Win(ticTacToeBoard) == true) {
				player1Victory = true;
			}
		}
		else if (player1Position <= 9) {
			ticTacToeBoard.at(player1Position) = 'X';
			if (player1Win(ticTacToeBoard) == true) {
				player1Victory = true;
			}
		}
		
		DrawBoard(ticTacToeBoard);

		if (player1Victory == true) {
			DrawBoard(ticTacToeBoard);
			break;
		}

		if (GameIsADraw(ticTacToeBoard) == true) {
			gameDrawn = true;
			break;
		}

		cout << "\nPlayer 2 which number you would like to place your symbol: ";
		cin >> player2Position;
		cout << endl;

		if (player2Position <= 3) {
			ticTacToeBoard.at(player2Position) = 'O';
			if (player2Win(ticTacToeBoard) == true) {
				player2Victory = true;
			}
		}
		else if (player2Position <= 6) {
			ticTacToeBoard.at(player2Position) = 'O';
			if (player2Win(ticTacToeBoard) == true) {
				player2Victory = true;
			}
		}
		else if (player2Position <= 9) {
			ticTacToeBoard.at(player2Position) = 'O';
			if (player2Win(ticTacToeBoard) == true) {
				player2Victory = true;
			}
		}
	
		if (player2Victory == true) {
			DrawBoard(ticTacToeBoard);
			break;
		}
	}

	if (player1Victory == true) {
		cout << "\nPlayer 1 has won!\nBetter luck next time Player2." << endl << endl;
	}
	else if (player2Victory == true) {
		cout << "\nPlayer 2 has won!\nBetter luck next time Player1." << endl << endl;
	}
	else if (gameDrawn == true) {
		cout << "The Game is Drawn!" << endl << endl;
	}

	system("pause");
	
	return 0;
}