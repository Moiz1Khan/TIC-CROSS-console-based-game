# TIC-CROSS-console-based-game

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Game Rules](#game-rules)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project is a simple console-based implementation of the classic Tic-Tac-Toe game in C++. Two players take turns to place their marks on a 3x3 grid, and the first player to align three marks in a row, column, or diagonal wins the game.

## Features

- Two-player game
- Simple and intuitive user interface
- Checks for winning conditions and declares the winner

## Installation

To run this project, you need to have a C++ compiler installed on your machine. Follow the steps below to set up and run the game:

1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/tic-tac-toe-game.git
    cd tic-tac-toe-game
    ```

2. Compile the source code:
    ```bash
    g++ -o tic_tac_toe tic_tac_toe.cpp
    ```

3. Run the executable:
    ```bash
    ./tic_tac_toe
    ```

## Usage

1. Start the game by running the executable.
2. The game board will be displayed as a 3x3 grid with positions labeled 1 to 9.
3. Players take turns to enter the number corresponding to the position where they want to place their mark.
4. The game checks for a winner after each move and declares the winner if there is one.
5. If all positions are filled without a winner, the game declares a draw.

## Game Rules

- Players take turns to enter their moves.
- The first player to get three marks in a row, column, or diagonal wins.
- If all positions are filled without a winner, the game is declared a draw.

## Contributing

We welcome contributions to improve this project! Here are some ways you can contribute:

- Report bugs and issues
- Suggest new features or improvements
- Submit pull requests to add new features or fix bugs

Please ensure that your contributions align with the project's coding style and standards.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
