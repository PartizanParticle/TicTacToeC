/*
 * TICTACTOE -- Human vs. Computer
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
    int size = 0;

	printf("Welcome to TicTacToe.\n");
	printf("You will be playing against the computer.\n");
	printf("Goodluck!\n\n");

	printf("Enter the size of the board: ");

    if(scanf("%d", &size) != 1){
        printf("Yeah... board must be of an integer size");
    } else {
        printf("The game board is %d by %d\n", size, size);

        size = size * 2;
        TicTacToe *temp;
        temp->size = size;
        temp->winner = 0;
        temp->board = (int**)malloc(sizeof(int *)*size); //create initial array space
        temp->board[0];

        for(int i=0; i<size; i++){ //create space for the 2nd array
            int *ptr_to_space = (int *)malloc(sizeof(int)*size);
            temp->board[i] = ptr_to_space;
            printf("%d\n", temp->board[i]);
        }
    }
}

/* initialize the matrix. */
void init_game(int *board[])
{

}

/*
TicTacToe *init_game(int size)
{
  int i, j;
  i=j=size;

  TicTacToe *temp;
  
  (*temp).board=(int**)malloc(sizeof(int *)*size); //create initial array space

  (*temp).board[0];
  for(i=0; i<size; i++){ //create space for the 2nd array
    int *ptr_to_space = (int *)malloc(sizeof(int)*size);
    (*temp).board[i]=ptr_to_space;
  }
  (*temp).size=size; //for use later in program, print for example
  return temp;

}*/
