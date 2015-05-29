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
#include "tictactoe.h"

int check();
void init_game(int *board[]);
int player_move();
void computer_move();
void print_game();
char tokenstr(int token);
void print_result();


typedef struct TicTacToe{
  int size; //size of game board
  int **board; //game board 2d array [size][size]
  int winner; //who won, draw=-2, human win=-1, none=0, computer win =1;
} TicTacToe;

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

        TicTacToe *temp;

        (*temp).board=(int**)malloc(sizeof(int *)*size); //create initial array space
        (*temp).board[0];
        for(int i=0; i<size; i++){ //create space for the 2nd array
            int *ptr_to_space = (int *)malloc(sizeof(int)*size);
            (*temp).board[i]=ptr_to_space;
        }
    }
}

typedef struct TicTacToe
{
    int size; // this is the size of the game board
    int **board; // this is the game board
    int winner; // who won
} TicTacToe;


/* initialize the matrix. */
void init_game(int *board[])
{
    board = board[size][size];
    int i, j;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            board[i][j] = NONE;
        }
    }
}
