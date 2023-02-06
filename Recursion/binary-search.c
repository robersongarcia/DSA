#include <stdio.h>

int array[10] = {0,1,2,5,7,8,9,10,11,12};

int binary_search(int bottom, int top, int num){

    if(array[((top + bottom)/2)] == num)
        return ((top + bottom)/2);
    else if(num < ((top + bottom)/2))
        return binary_search(bottom, ((top + bottom)/2), num);
    else
        return binary_search(((top + bottom)/2), top, num);
}

int main(int argc, char const *argv[])
{
    printf("-> %d -> %d\n",binary_search(0,9,7),array[binary_search(0,9,7)]);
    return 0;
}
