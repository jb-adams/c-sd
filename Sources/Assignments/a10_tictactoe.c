/*
 * Purpose: Tic-tac-toe game
 * Author: Jeremy Adams
 * Date: 2020
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void drawBoard(char board[]);
int getChoice(int player, char board[]);
void enterChoice(int player, int choice, char board[]);
bool checkWin(char board[]);
bool checkDraw(char board[]);

int main() {

    char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int player = 1;
    int winner;
    bool gameComplete = false;
    bool gameWon = false;

    while (!gameComplete) {
        drawBoard(board);
        int choice = getChoice(player, board);
        enterChoice(player, choice, board);
        bool win = checkWin(board);
        if (win) {
            gameComplete = true;
            gameWon = true;
            winner = player;
        } else {
            bool draw = checkDraw(board);
            if (draw) {
                gameComplete = true;
            }
        }
        player = player == 1 ? 2 : 1;
    }

    drawBoard(board);
    if (gameWon) {
        printf("\nGame over, Player %d is the winner!\n", winner);
    } else {
        printf("\nGame over, it's a draw!\n");
    }


}

int getChoice(int player, char board[]) {
    int choice;
    bool validChoice = false;

    do {
        printf("\nPlayer %d, enter a number: ", player);
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 9) {
            if (board[choice] != 'x' && board[choice] != 'o') {
                validChoice = true;
            }
        }
        if (!validChoice) {
            printf("Invalid Choice, try again\n");
        }
    } while (!validChoice);
    return choice;
}

void enterChoice(int player, int choice, char board[]) {
    char symbol = player == 1 ? 'x' : 'o';
    board[choice] = symbol;
}

bool checkWin(char board[]) {
    
    // win conditions
    int w[8][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9},
        {1, 5, 9},
        {3, 5, 7}
    };

    for(int i = 0; i < 8; i++) {
        if (board[w[i][0]] == board[w[i][1]]) {
            if (board[w[i][1]] == board[w[i][2]]) {
                if (board[w[i][0]] == board[w[i][2]]) {
                    return true;
                }
            }
        }
    }
    return false;
}

bool checkDraw(char board[]) {

    bool draw = true;
    for(int i=1; i<=9; i++) {
        if (board[i] != 'x' && board[i] != 'o') {
            draw = false;
            break;
        }
    }
    return draw;
}

void drawBoard(char board[]) {
    system("clear");
    printf("\n\tTic Tac Toe\n\n");
    printf("Player 1 (x) vs. Player 2 (o)\n\n");
    printf(
        " _______________________\n"
        "|       |       |       |\n"
        "|       |       |       |\n"
        "|   %c   |   %c   |   %c   |\n"
        "|       |       |       |\n"
        "|_______|_______|_______|\n"
        "|       |       |       |\n"
        "|       |       |       |\n"
        "|   %c   |   %c   |   %c   |\n"
        "|       |       |       |\n"
        "|_______|_______|_______|\n"
        "|       |       |       |\n"
        "|       |       |       |\n"
        "|   %c   |   %c   |   %c   |\n"
        "|       |       |       |\n"
        "|_______|_______|_______|\n",
        board[1], board[2], board[3], board[4], board[5],
        board[6], board[7], board[8], board[9]
    );
}