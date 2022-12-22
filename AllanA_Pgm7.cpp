//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//Program Description: The program lets two people play a game of tic-tac-toe.
//Program Author: Ashley Allan 
//Class and Term: CS2010 1001 Fall 2022
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#include <iostream> std::cout
#include <fstream>
#include <cstring>

using namespace std;

//Global variables:

const int ROWS = 6; //Constants that hold the size of the array in the file
const int COLS = 13;
char row; //Variables for rows and columns on the board 
int column;
int i;
int j;
bool turnX = true; //Booleans that determine whose turn it is 
bool turnO = false;
char character;

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//Function Name:	readInitialGrid
// 
// Function Description:	Function reads the input file, converts them to characters
//							and sorts them into the array that holds the gameboard.
//							Gameboard is then output to the console window. 
// 
// Function Parameters:		char values[ROWS][COLS]: 2D array that holds game board
//							ifstream & infile: File that holds ASCII values for game board
//  
// Function ReturnValue:	None
// 
// Function Author:		Ashley Allan 
// 
// Class and Term:		CS2010 1001 Fall 2022
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

void readInitialGrid(char values[ROWS][COLS], ifstream & infile) {
	
	int fileContents; //Holds ASCII character values from the file

	infile.open("pgm7-input.txt"); //Opens the file 

		for (i = 0; i < ROWS; ++i) { //Loops that read and separate file contents into the array
			for (j = 0; j < COLS; ++j) {
				infile >> fileContents;
				values[i][j] = static_cast<char>(fileContents); //Converts ASCII values to characters 
				cout << values[i][j];
			}
			cout << endl;
		}

	infile.close(); //Closes file 
}

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//Function Name:	initializeGrid
// 
// Function Description:	Function initializes only cells where X's and O's have 
//							been placed after a game is played.
// 
// Function Parameters:		char values[ROWS][COLS]: 2D array that holds the game board
//  
// Function ReturnValue:	None
// 
// Function Author:		Ashley Allan 
// 
// Class and Term:		CS2010 1001 Fall 2022
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

void initializeGrid(char values[ROWS][COLS]) {

	if (turnX == true) { //Used for outputting the correct character based on whose turn it is
		character = 'X';
	}
	else {
		character = 'O';
	}

	switch (row) { //Outer switch statement that determines the row
	case 'A':
	case 'a':

		switch (column) { //Inner swith statement that determines the column

		case 1:
			if (values[1][3] == ' ') { //Checks to make sure location of placement is empty 
				values[1][3] = character; //Statement that places the character in the correct location on the board
				break;
			}
			else {
				cout << "ERROR: Spot " << row << column << " already taken! Try again." << endl;
				cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;
				cin >> row;
				cin >> column;
			}
		case 2:
			if (values[3][3] == ' ') {
				values[3][3] = character;
				break;
			}
			else {
				cout << "ERROR: Spot " << row << column << " already taken! Try again." << endl;
				cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;
				cin >> row;
				cin >> column;
			}
		case 3:
			if (values[5][3] == ' ') {
				values[5][3] = character;
				break;
			}
			else {
				cout << "ERROR: Spot " << row << column << " already taken! Try again." << endl;
				cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;
				cin >> row;
				cin >> column;
			}
		default:
			cout << "ERROR" << endl;
		}
		break;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	case 'B':
	case 'b': 

		switch (column) {
		
		case 1:
			if (values[1][7] == ' ') {  
				values[1][7] = character; 
				break;
			}
			else {
				cout << "ERROR: Spot " << row << column << " already taken! Try again." << endl;
				cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;
				cin >> row;
				cin >> column;
			}
		case 2:
			if (values[3][7] == ' ') {
				values[3][7] = character;
				break;
			}
			else {
				cout << "ERROR: Spot " << row << column << " already taken! Try again." << endl;
				cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;
				cin >> row;
				cin >> column;
			}
		case 3:
			if (values[5][7] == ' ') {
				values[5][7] = character;
				break;
			}
			else {
				cout << "ERROR: Spot " << row << column << " already taken! Try again." << endl;
				cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;
				cin >> row;
				cin >> column;
			}
		default:
			cout << "ERROR" << endl;
		}
		break;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	case 'C':
	case 'c': 

		switch (column) {
		case 1:
			if (values[1][11] == ' ') {
				values[1][11] = character;
				break;
			}
			else {
				cout << "ERROR: Spot " << row << column << " already taken! Try again." << endl;
				cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;
				cin >> row;
				cin >> column;
			}
		case 2:
			if (values[3][11] == ' ') {
				values[3][11] = character;
				break;
			}
			else {
				cout << "ERROR: Spot " << row << column << " already taken! Try again." << endl;
				cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;
				cin >> row;
				cin >> column;
			}
		case 3:
			if (values[5][11] == ' ') {
				values[5][11] = character;
				break;
			}
			else {
				cout << "ERROR: Spot " << row << column << " already taken! Try again." << endl;
				cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;
				cin >> row;
				cin >> column;
			}
		default:
			cout << "ERROR" << endl;
		}
		break;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	default:
		cout << "ERROR" << endl;
	}
}

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//Function Name:	displayGrid
// 
// Function Description:	Function displays each cell of the game board.
// 
// Function Parameters:		char values[ROWS][COLS]: 2D array that holds the game board
//  
// Function ReturnValue:	None
// 
// Function Author:		Ashley Allan 
// 
// Class and Term:		CS2010 1001 Fall 2022
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

void displayGrid(char values[ROWS][COLS]) {
	
	system("cls"); //Clears the previous grid 

	for (i = 0; i < ROWS; ++i) { //Displays an updated game board 
		for (j = 0; j < COLS; ++j) {
			cout << values[i][j];
		}
		cout << endl;
	}
}

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//Function Name:	isWin
// 
// Function Description:	Function determines whether or not there is a winner and 
//							who won. 
// 
// Function Parameters:		char values[ROWS][COLS]: 2D array that holds the game board
//							int moveCount: number of moves 
//  
// Function ReturnValue:	True: if there is a winner, False: otherwise
// 
// Function Author:		Ashley Allan 
// 
// Class and Term:		CS2010 1001 Fall 2022
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

bool isWin(char values[ROWS][COLS], int moveCount) {

	bool won = false; 
	bool tie = true;

	if (moveCount < 5) { //It is not possible to win until at least the fifth move
		won = false;
		tie = false; 
	}

	else {
		
		if ((values[1][3] == character) && (values[3][3] == values[1][3]) && (values[5][3] == values[3][3])) { //Winner if the 'A' column is filled
				
			won = true;
			tie = false;
			cout << character << " wins!" << endl << endl << "Would you like to play again? [Y or N]. --> " << endl << endl;
		}

	   else if ((values[1][7] == character) && (values[3][7] == values [1][7]) && (values[5][7] == values[3][7])) {  //Winner if the 'B' column is filled 

				won = true;
				tie = false;
				cout << character << " wins!" << endl << endl << "Would you like to play again? [Y or N]. --> " << endl << endl;
		}

		else if ((values[1][11] == character) && (values[3][11] == values[1][11]) && (values[5][11] == values[3][11])) { //Winner if the 'C' column is filled 

				won = true;
				tie = false;
				cout << character << " wins!" << endl << endl << "Would you like to play again? [Y or N]. --> " << endl << endl;
		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		else if ((values[1][3] == character) && (values[1][7] == values[1][3]) && (values[1][11] == values[1][7])) { //Winner if row 1 is filled

			won = true;
			tie = false;
			cout << character << " wins!" << endl << endl << "Would you like to play again? [Y or N]. --> " << endl << endl;
		}

		else if ((values[3][3] == character) && (values[3][7] == values[3][3]) && (values[3][11])) { //Winner if row 2 is filled

			won = true; 
			tie = false;
			cout << character << " wins!" << endl << endl << "Would you like to play again? [Y or N]. --> " << endl << endl;
		}

		else if ((values[5][3] == character) && (values[5][7] == values[5][3]) && (values[5][11] == values[5][3])) { //Winner if row 3 is filled

			won = true;
			tie = false;
			cout << character << " wins!" << endl << endl<< "Would you like to play again? [Y or N]. --> " << endl << endl;
		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		else if ((values[1][3] == character) && (values[3][7] == values[1][3]) && (values[5][11] == values[3][7])) { //Winner if diagonal from top left 

			won = true;
			tie = false;
			cout << character << " wins!" << endl << endl << "Would you like to play again? [Y or N]. --> " << endl << endl;
		}

		else if ((values[1][11] == character) && (values[3][7] == values[1][11]) && (values[5][3] == values[3][7])) { //Winner if diagonal from top left 

			won = true;
			tie = false;
			cout << character << " wins!" << endl << endl << "Would you like to play again? [Y or N]. --> " << endl << endl;
		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		else { //If there is no winner, it is a tie
			
			won = false;
			tie = true;
		}
	}

	if ((moveCount == 9) && (tie == true)) { //Ends the game if there is a tie 
		
		won = true;
		cout << "Tie! " << endl << endl << "Would you like to play again? [Y or N]. --> " << endl << endl;

	}

	return won;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {

	bool tempX;
	bool tempO;
	char values[ROWS][COLS]; //2D array that holds characters that create the game board  
	int moveCount = 0;
	bool winner;
	char playAgain;

	ifstream infile;
	readInitialGrid(values, infile);

	if (values[0][0] != ' ') { //Makes sure the file is successfully opened and the game board is successfully created 
		return 1;
	}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	winner = isWin(values, moveCount);

	while (winner == false) { //Loop plays game until there is a winner 
	
	++moveCount;
	
	cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;
	
	cin >> row; //Reads in input for the move 
	cin >> column;

	if ((row != 'A') && (row != 'B') && (row != 'C') && (row != 'a') && (row != 'b') && (row != 'c')) { //Checks to make sure a valid move is input 
		
		if ((column != 1) && (column != 2) && (column != 3)) {
			
			cout << "ERROR: Enter column [A, B, or C] followed by row [1, 2, or 3]. " << endl;
			cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;
			cin >> row;
			cin >> column;
		}
	}
	initializeGrid(values); //Puts X or O on the board to complete turn
	displayGrid(values); //Displays updated grid 

	tempX = turnX; //Switches whose turn it is
	tempO = turnO;
	turnO = turnX;
	turnX = tempO;

	cout << endl;

	winner = isWin(values, moveCount); //Checks to see if there is a winner yet
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	while (winner == true) {
		
		cin >> playAgain;

		if ((playAgain == 'Y') || (playAgain == 'y')) { //Resets the game again if the user selects yes 

			system("cls");
			winner = false; 
			moveCount = 0; 

			while (winner == false) { //Plays game again until there is a winner 

				++moveCount;

				cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;

				cin >> row; //Reads in input for the move 
				cin >> column;

				if ((row != 'A') && (row != 'B') && (row != 'C') && (row != 'a') && (row != 'b') && (row != 'c')) { //Checks to make sure a valid move is input 

					if ((column != 1) && (column != 2) && (column != 3)) {

						cout << "ERROR: Enter column [A, B, or C] followed by row [1, 2, or 3]. " << endl;
						cout << "Your move. Enter column [A, B, or C] followed by row [1, 2, or 3]. --> " << endl;
						cin >> row;
						cin >> column;
					}
				}
				initializeGrid(values); //Puts X or O on the board to complete turn
				displayGrid(values); //Displays updated grid 

				tempX = turnX; //Switches whose turn it is
				tempO = turnO;
				turnO = turnX;
				turnX = tempO;

				cout << endl;

				winner = isWin(values, moveCount); //Checks to see if there is a winner yet

			}
		}

		else if ((playAgain == 'N') || (playAgain == 'n')) { //Ends the game 

			cout << "Goodbye! " << endl;
			return 0; 
		}

		else if ((playAgain != 'Y') && (playAgain != 'y') && (playAgain != 'N') && (playAgain != 'n')) { //If input is invalid 

			cout << "ERROR: Enter [Y or N]. " << endl;
			cin >> playAgain; 
		}
	}

	return 0;
} 