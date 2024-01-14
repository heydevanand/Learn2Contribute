/* Write a program that creates a chessboard, sets all the pieces on it and then displays the contents of the board.*/

#include <stdio.h>

int main()
{
    char chessboard[8][8];
    int row, column;
    for (row=0; row<8; row++)
    {
        for (column=0; column<8; column++)
        {
            chessboard[row][column] = ' ';
        }
    }
    chessboard[0][0] = 'R';
    chessboard[0][1] = 'N';
    chessboard[0][2] = 'B';
    chessboard[0][3] = 'Q';
    chessboard[0][4] = 'K';
    chessboard[0][5] = 'B';
    chessboard[0][6] = 'N';
    chessboard[0][7] = 'R';
    chessboard[7][0] = 'R';
    chessboard[7][1] = 'N';
    chessboard[7][2] = 'B';
    chessboard[7][3] = 'Q';
    chessboard[7][4] = 'K';
    chessboard[7][5] = 'B';
    chessboard[7][6] = 'N';
    chessboard[7][7] = 'R';
    int i;
    for (i=0; i<8; i++)
    {
        chessboard[1][i]= 'P';
    }
    for (i=0; i<8; i++)
    {
        chessboard[6][i]='P';
    }
    for (i=0; i<8; i++)
    {
        int j;
        for (j=0; j<8; j++)
        {
            printf("%c",chessboard[i][j]);
        }
        printf("\n");
    }
    return 0;
}