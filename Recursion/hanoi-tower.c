#include <stdio.h>

#define LENGTH 7

int varInitial[LENGTH] = {1,2,3,4,5,6,7};
int varFinal[LENGTH];
int varCentral[LENGTH];

void moveDisc(int initial[], int aux[], int final[], int Disc){

    //find position of the disc
    int position = 0, i,j;
    Disc++;

    for( i = 0 ; i < LENGTH ;i++ ){
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
    hanoi(LENGTH);
    printArray(varInitial,LENGTH);
    printArray(varCentral,LENGTH);
    printArray(varFinal,LENGTH);
    return 0;
}
