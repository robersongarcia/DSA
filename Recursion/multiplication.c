#include <stdio.h>

long multiplication(int a, int b){
    long total = 0;
    for (int i = 1; i <= b; i++)
    {
        total+=a;
    }
    
    return total;
}

long multiplicationRecur(int a, int b){
    if( b == 1)
        return a;
    else
        return a + multiplicationRecur(a, b-1);
}

int main(int argc, char const *argv[])
{
    int a,b;
    scanf("%d %d", &a, &b );
    printf("%ld\n", multiplicationRecur(a,b));

    return 0;
}
