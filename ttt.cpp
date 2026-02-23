#include <iostream>
#include <vector>
#include "ttt_functions.hpp"
using namespace std;

int main() {
    bool keep_playing = true;

    while (keep_playing) {
        bool game_over = false;
        int turn_count = 0;

        const char x      = 'X';
        const char circle = 'O';

        int player1_move, player2_move;

        // Each row of the board tracks which player occupies each cell (0 = empty, 1 = P1, 2 = P2)
        vector<int> board1 = {0, 0, 0};
        vector<int> board2 = {0, 0, 0};
        vector<int> board3 = {0, 0, 0};

        // Displayed characters for each cell — replaced by 'X' or 'O' as the game progresses
        vector<char> positions = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

        cout << "---------------------------\n";
        cout << "Welcome to Tic-Tac-Toe!\n";
        cout << "---------------------------\n";

        displayBoard(positions);

        while (!game_over) {

            // --- Player 1's turn ---
            player1Turn(player1_move, positions);
            updateBoard(positions, player1_move, x);

            // Convert 1-9 input to row/col indices and mark the internal board
            int row = (player1_move - 1) / 3;
            int col = (player1_move - 1) % 3;
            if      (row == 0) board1[col] = 1;
            else if (row == 1) board2[col] = 1;
            else               board3[col] = 1;

            displayBoard(positions);
            turn_count++;

            if (checkWin(board1, board2, board3, 1)) {
                cout << "\nPlayer 1 wins!\n";
                game_over = true;

            } else if (turn_count >= 9) {
                cout << "\nIt's a tie!\n";
                game_over = true;

            } else {

                // --- Player 2's turn ---
                player2Turn(player2_move, positions);
                updateBoard(positions, player2_move, circle);

                row = (player2_move - 1) / 3;
                col = (player2_move - 1) % 3;
                if      (row == 0) board1[col] = 2;
                else if (row == 1) board2[col] = 2;
                else               board3[col] = 2;

                displayBoard(positions);
                turn_count++;

                if (checkWin(board1, board2, board3, 2)) {
                    cout << "\nPlayer 2 wins!\n";
                    game_over = true;

                } else if (turn_count >= 9) {
                    cout << "\nIt's a tie!\n";
                    game_over = true;
                }
            }
        }

        cout << "\nGame over! Thanks for playing.\n";
        keep_playing = playAgain();
    }

    cout << "\nThanks for playing! Goodbye!\n";

    return 0;
}
