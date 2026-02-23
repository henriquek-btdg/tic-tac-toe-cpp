# ❌⭕ Tic-Tac-Toe in C++

A terminal-based two-player Tic-Tac-Toe game developed as part of the [Codecademy Learn C++](https://www.codecademy.com/learn/learn-c-plus-plus) course.

The project demonstrates core C++ concepts including functions, vectors, references, loops, and multi-file compilation.

---

## Gameplay

```
---------------------------
Welcome to Tic-Tac-Toe!
---------------------------

       |       |       
   1   |   2   |   3   
_______|_______|_______
       |       |       
   4   |   5   |   6   
_______|_______|_______
       |       |       
   7   |   8   |   9   
       |       |       

Player 1 turn --> 5

       |       |       
   1   |   2   |   3   
_______|_______|_______
       |       |       
   4   |   X   |   6   
_______|_______|_______
       |       |       
   7   |   8   |   9   
       |       |       
```

Players alternate turns, choosing a cell by number (1–9). The game detects wins, ties, and invalid/taken moves. At the end, players are asked if they want to play again.

---

## Features

- Two-player local multiplayer (Player 1 = `X`, Player 2 = `O`)
- Input validation — rejects out-of-range numbers and occupied cells
- Win detection across all 8 combinations (3 rows, 3 columns, 2 diagonals)
- Tie detection when all 9 cells are filled with no winner
- Play again loop — no need to restart the program

---

## Project Structure

```
tic-tac-toe/
├── ttt.cpp               # Main game loop
├── ttt_functions.cpp     # Game logic and I/O functions
├── ttt_functions.hpp     # Function declarations
└── README.md
```

---

## Getting Started

### Prerequisites
- A C++ compiler with C++11 support or later (e.g. `g++`, `clang++`)

### Compile & Run

```bash
g++ ttt.cpp ttt_functions.cpp -o ttt
./ttt
```

---

## Concepts Practiced

- Multi-file compilation (`.cpp` + `.hpp`)
- Pass by reference (`&`) for in-place updates
- `std::vector` for dynamic board state
- Input validation loops with `while`
- Modular design with single-responsibility functions

---

## License

Developed for educational purposes as part of the Codecademy Learn C++ course.
