#include <stdio.h>

long factorialIter(int num){
    long factorial = 1;

    for(int i=1; i <= num; i++){
        factorial = factorial * i;
    }

    return factorial;
}

long factorialRecur(int num){
    if(num == 0)
        return 1;
    else
        return (num * factorialRecur(num-1));
}


int main(int argc, char const *argv[])
{
    int num = 5;
    printf("factorial de %d: %ld\n\n", num, factorialRecur(num));

    return 0;
}
