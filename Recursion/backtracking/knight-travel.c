#include <stdio.h>

//data
#define N 8
#define n (N+1)

//knigth posible moves
int d[8][2] = {{2,1}, {1,2}, {-1,2}, {-2,1}, {-2,-1}, {-1,-2}, {1,-2}, {2,-1}};

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

void knigth_travel(int jumpNum, int x, int y, int *success){
    int new_x, new_y;
    int k = 0; //posible moves
    *success = 0;

    do
    {
        k++;
        new_x = x + d[k-1][0];
        new_y = y + d[k-1][1];

        //check new coords
        if((new_x>=1) && (new_x<=N) && (new_y>=1) && (new_y<=N) && (board[new_x][new_y]==0)){
            board[new_x][new_y] = jumpNum;
            if(jumpNum < N*N){
                knigth_travel(jumpNum+1,new_x,new_y,success);

                if(!(*success)){
                    board[new_x][new_y] = 0;
                }
            }
            else
                *success = 1;
        }

    } while ((k<8) && !(*success));
    
}

int main(int argc, char const *argv[])
{
    int x=1;
    int y=1;
    board[x][y] = 1;
    int flag=0;
    drawBoard();


    knigth_travel(2,x,y,&flag);

    if(flag==1){
        printf("travel success\n\n");
        drawBoard();
    }else
        printf("no travel \n\n");
    return 0;
}
