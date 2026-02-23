#pragma once
#include <iostream>
#include <vector>

/**
 * Checks all 8 winning combinations for the given player.
 *
 * @param board1 First row of the board
 * @param board2 Second row of the board
 * @param board3 Third row of the board
 * @param player Player identifier (1 or 2)
 * @return true if the player has won, false otherwise
 */
bool checkWin(std::vector<int>& board1, std::vector<int>& board2, std::vector<int>& board3, int player);

/**
 * Prints the current state of the board to stdout.
 *
 * @param positions Vector of 9 chars representing each cell (digit, 'X', or 'O')
 */
void displayBoard(std::vector<char> positions);

/**
 * Places the given symbol on the board at the chosen position.
 *
 * @param positions Vector of 9 chars representing the board
 * @param move      Chosen cell number (1-9)
 * @param symbol    Character to place ('X' or 'O')
 */
void updateBoard(std::vector<char>& positions, int move, char symbol);

/**
 * Prompts Player 1 for a valid move, re-asking on invalid or taken cells.
 *
 * @param player1_move Output: the validated cell number chosen by Player 1
 * @param positions    Current board state used for occupied-cell validation
 */
void player1Turn(int& player1_move, std::vector<char>& positions);

/**
 * Prompts Player 2 for a valid move, re-asking on invalid or taken cells.
 *
 * @param player2_move Output: the validated cell number chosen by Player 2
 * @param positions    Current board state used for occupied-cell validation
 */
void player2Turn(int& player2_move, std::vector<char>& positions);

/**
 * Asks both players if they want to play again.
 *
 * @return true if they want to play again, false otherwise
 */
bool playAgain();
