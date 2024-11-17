#include <stdio.h>
int main()
{
    int amit, sahil;
    int *a, *b;
    a = &amit;
    b = &sahil;
    *a = 5;
    *b = 10;
    int temp = *a;
    *a = *b;
    *b=temp;
    printf("%d %d", *a, *b);

    return 0;
}