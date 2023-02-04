#include <stdio.h>

int fibonacci(int num){
    int current = 0;
    int next = 1;
    int aux = 0;

    for(int i = 0; i < num; i++ ){
        aux = current;
        current = next;
        next = aux + next;
    }

    return current;
}

int fibonacciRecur(int num){
    if(num == 0 || num == 1)
        return num;
    else
        return fibonacciRecur(num - 2) + fibonacciRecur(num - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacciRecur(n));
    return 0;
}
