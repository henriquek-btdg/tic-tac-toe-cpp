#include <iostream>
#include <vector>
#include "ttt_functions.hpp"
using namespace std;

// Checks all 8 winning combinations (3 rows, 3 columns, 2 diagonals) for the given player.
bool checkWin(vector<int>& board1, vector<int>& board2, vector<int>& board3, int player) {
    // Rows
    if (board1[0] == player && board1[1] == player && board1[2] == player) return true;
    if (board2[0] == player && board2[1] == player && board2[2] == player) return true;
    if (board3[0] == player && board3[1] == player && board3[2] == player) return true;

    // Columns
    if (board1[0] == player && board2[0] == player && board3[0] == player) return true;
    if (board1[1] == player && board2[1] == player && board3[1] == player) return true;
    if (board1[2] == player && board2[2] == player && board3[2] == player) return true;

    // Diagonals
    if (board1[0] == player && board2[1] == player && board3[2] == player) return true;
    if (board1[2] == player && board2[1] == player && board3[0] == player) return true;

    return false;
}

void displayBoard(vector<char> positions) {
    cout << "\n       |       |       " << endl;
    cout << "\n   " << positions[0] << "   |   " << positions[1] << "   |   " << positions[2] << "   " << endl;
    cout << "\n_______|_______|_______" << endl;
    cout << "\n       |       |       " << endl;
    cout << "\n   " << positions[3] << "   |   " << positions[4] << "   |   " << positions[5] << "   " << endl;
    cout << "\n_______|_______|_______" << endl;
    cout << "\n       |       |       " << endl;
    cout << "\n   " << positions[6] << "   |   " << positions[7] << "   |   " << positions[8] << "   " << endl;
    cout << "\n       |       |       \n" << endl;
}

void updateBoard(vector<char>& positions, int move, char symbol) {
    positions[move - 1] = symbol;
}

void player1Turn(int& player1_move, vector<char>& positions) {
    bool valid_move = false;

    while (!valid_move) {
        cout << "\nPlayer 1 turn --> ";
        cin >> player1_move;

        if (player1_move < 1 || player1_move > 9) {
            cout << "\nInvalid move! Choose a number from 1 to 9.";
            continue;
        }

        if (positions[player1_move - 1] == 'X' || positions[player1_move - 1] == 'O') {
            cout << "\nPosition already taken! Choose another.";
        } else {
            valid_move = true;
        }
    }
}

void player2Turn(int& player2_move, vector<char>& positions) {
    bool valid_move = false;

    while (!valid_move) {
        cout << "\nPlayer 2 turn --> ";
        cin >> player2_move;

        if (player2_move < 1 || player2_move > 9) {
            cout << "\nInvalid move! Choose a number from 1 to 9.";
            continue;
        }

        if (positions[player2_move - 1] == 'X' || positions[player2_move - 1] == 'O') {
            cout << "\nPosition already taken! Choose another.";
        } else {
            valid_move = true;
        }
    }
}

bool playAgain() {
    char response;

    while (true) {
        cout << "\nPlay again? (y/n): ";
        cin >> response;

        if (response == 'y' || response == 'Y') {
            return true;
        } else if (response == 'n' || response == 'N') {
            return false;
        } else {
            cout << "\nInvalid input! Please enter 'y' or 'n'.";
        }
    }
}
