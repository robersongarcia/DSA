#include <stdio.h>

#define N 8

#define n (N+1)

int board [n][n];

void drawBoard(){

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            printf("%d ",board[i][j]);
        }
        printf("\n");
    }
    

}



int main(int argc, char const *argv[])
{
    drawBoard();
    return 0;
}
