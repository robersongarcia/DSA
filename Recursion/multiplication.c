#include <stdio.h>

long multiplication(int a, int b){
    long total = 0;
    for (int i = 1; i <= b; i++)
    {
        total+=a;
    }
    
    return total;
}


int main(int argc, char const *argv[])
{
    int a,b;
    scanf("%d %d", &a, &b );
    printf("%ld\n", multiplication(a,b));

    return 0;
}
