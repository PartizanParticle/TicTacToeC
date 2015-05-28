/*
 * TICTACTIE -- Human vs. Computer
 *
 * Author: Marcel van Workum
 * Date: May 2015
 *
 * A simple game of tictactoe played in the commandline
 * supporting any size of board.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tictactoe.h"

int check();
void init_game(int *board);
int player_move();
void computer_move();
void print_game();
char tokenstr(int token);
void print_result();

int winner;		// who won?
int size;
int *board;

int main(void)
{
	printf("Welcome to TicTacToe.\n");
	printf("You will be playing against the computer.\n");
	printf("Goodluck!\n\n");

	printf("Enter the size of the board: ");

    if(scanf("%d", &size) != 1){
        printf("Yeah... board must be of an integer size");
    } else {
        printf("The game board is %d by %d\n", size, size);
        int board[size][size];
        init_game(board);
    }
}

/* initialize the matrix. */
void init_game(int *board)
{

    int i, j;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            board[i][j] = NONE;
        }

    }
}

/*int get_board_size()
{
    char i[10];
    int found = FALSE;
    while (found == FALSE){
        fgets(i, sizeof(i), stdin);
        for (int j = 0; j < strlen(i)-1; ++j)
        {
            if (!isdigit(i[j]))
            {
                found = FALSE;
                printf("Please enter an int\n");
                break;
            }
        }
        found = TRUE;
    }
    return atoi(i);
}*/