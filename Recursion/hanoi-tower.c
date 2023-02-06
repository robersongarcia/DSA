#include <stdio.h>

int varInitial[] = {1,2,3,4,5,6};
int varFinal[] = {0,0,0,0,0,0};
int varCentral[] = {0,0,0,0,0,0};

void moveDisc(int initial[], int aux[], int final[], int Disc){

    //find position of the disc
    int position = 0, i,j;
    Disc++;

    for( i = 0 ; i < 6 ;i++ ){
        if(initial[i]==Disc)
            position = i;
    }

    for(i = 0 ; i < position ; i++){
        if(initial[i]!=0){
            aux[i] = initial[i];  
            initial[i] = 0; 
        }
    }

    initial[position] = 0;
    final[position] = position+1;

    return;
}

void hanoi(int n){

    if(n==1){
        varInitial[0] = 0;
        varFinal[0] = 1;
    }
    else{
        hanoi(n-1);
        moveDisc(varInitial,varCentral,varFinal,n-1);        
        moveDisc(varCentral,varFinal,varInitial,n-1);
        hanoi(n-1);
    }

}

void printArray(int array[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("-> %d",array[i]);
    }

    printf("\n");

    return;
}


int main(int argc, char const *argv[])
{
    hanoi(6);
    printArray(varInitial,6);
    printArray(varCentral,6);
    printArray(varFinal,6);
    return 0;
}
