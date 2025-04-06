#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

/**
 * @brief Main function
 * 
 * The main function implements a simple game of Tic Tac Toe. The game is
 * played on a 3x3 board, with the player playing as X and the computer playing
 * as O. The game asks the player for their move, updates the board, and checks
 * if there is a winner or a tie after each move. If there is a winner or a tie,
 * the game ends. Otherwise, the computer makes its move and the process repeats.
 * 
 * @return 0 if the program runs successfully, non-zero otherwise
 */
int main() {
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    srand(time(0)); // Seed the random number generator
    drawBoard(spaces);

    while (running) {
        // Player's move
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer) || checkTie(spaces)) {
            break;
        }

        std::cout << "### Computer's Turn ###" << std::endl;    // Computer's move
        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer) || checkTie(spaces)) {
            break;
        }
    }

    std::cout << "Game Over" << std::endl;

    return 0;
}

/**
 * @brief Draw the Tic Tac Toe board
 * 
 * Prints the current state of the Tic Tac Toe board to the console.
 * The board is represented as a 3x3 grid with the current values
 * of the spaces array.
 */
void drawBoard(char *spaces) {
    std::cout << "              |    |     \n";
    std::cout << "            " << spaces[0] << " | " << spaces[1] << "  | " << spaces[2] << " \n";
    std::cout << "          ____|____|_____\n";
    std::cout << "              |    |     \n";
    std::cout << "            " << spaces[3] << " | " << spaces[4] << "  | " << spaces[5] << " \n";
    std::cout << "          ____|____|_____\n";
    std::cout << "              |    |     \n";
    std::cout << "            " << spaces[6] << " | " << spaces[7] << "  | " << spaces[8] << " \n";
}

/**
 * @brief Handles a player's move
 * 
 * Asks the player to enter a number from 1 to 9 to place
 * their mark on the board. If the input is invalid, it will
 * keep asking until a valid input is given. If the space is
 * already occupied, it will also ask again. The player's move
 * is then placed on the board.
 */
void playerMove(char *spaces, char player) {
    int number;
    while (true) {
        std::cout << "Enter a number (1-9) to place: ";
        std::cin >> number;
        if (std::cin.fail() || number < 1 || number > 9 || spaces[number - 1] != ' ') {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(1000, '\n'); // Ignore invalid input
            std::cout << "Invalid input. Try again.\n";
        } else {
            spaces[number - 1] = player;
            break;
        }
    }
}

/**
 * @brief Handles the computer's move
 * 
 * The computer randomly selects a free space on the board and
 * places its mark on it.
 */
void computerMove(char *spaces, char computer) {
    int number;
    while (true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}

/**
 * @brief Checks if there is a winner
 * 
 * Goes through all the possible winning combinations and
 * checks if there is a winner. If there is a winner, it will
 * print out a message and return true. If there is no winner,
 * it will return false.
 * 
 * @param spaces The array of spaces on the board
 * @param player The player's mark
 * @param computer The computer's mark
 * @return true if there is a winner, false otherwise
 */
bool checkWinner(char *spaces, char player, char computer) {
    // Winning combinations
    int winCombos[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Columns
        {0, 4, 8}, {2, 4, 6}             // Diagonals
    };

    for (auto &combo : winCombos) {
        if (spaces[combo[0]] != ' ' && spaces[combo[0]] == spaces[combo[1]] && spaces[combo[1]] == spaces[combo[2]]) {
            if (spaces[combo[0]] == player) {
                std::cout << "You Won!" << std::endl;
            } else {
                std::cout << "You Lost!" << std::endl;
            }
            return true;
        }
    }
    return false;
}

/**
 * @brief Checks if the game is a tie
 * 
 * This function iterates through the Tic Tac Toe board to check if
 * all spaces are filled. If any space is still empty, it returns false,
 * indicating that the game is not a tie. If all spaces are filled and
 * there is no winner, it prints a message indicating a tie and returns true.
 * 
 * @param spaces The array of spaces on the board
 * @return true if the game is a tie, false otherwise
 */

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    std::cout << "It's a Tie!" << std::endl;
    return true;
}


