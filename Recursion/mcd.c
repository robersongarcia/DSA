#include <stdio.h>

int mcd(int a, int b){
    if( a >= b && a%b == 0 )
        return b;
    else if(a > b){
        return mcd(b, a%b);
    } else
        return mcd(b,a);
}

int main(int argc, char const *argv[])
{
    printf("%d \n", mcd(25,60));
    return 0;
}
