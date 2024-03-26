#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

void ResetBoard();
void PrintBoard();
void playerMove();
void computerMove();
void printWinner(char);

int checkFreeSpaces();

char checkWinner();
char board[3][3];

const char PLAYA = 'X';
const char CPU = 'O';

int main()
{
char Winner = ' ';

    ResetBoard();
    PrintBoard();

return 0;
}

void ResetBoard()
{
for(int i = 0; i < 3; i++)
{
    for(int j = 0; j < 3; j++)
    {
        board[i][j] = ' ';
    }
}
}

void PrintBoard()
{
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
        printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
        printf("\n---|---|---\n");
            printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);

    printf("\n");
}

void playerMove()
{

}

void computerMove()
{

}

void printWinner(char)
{

}

int chechFreeSpaces()
{

}

char checkWinner()
{

}