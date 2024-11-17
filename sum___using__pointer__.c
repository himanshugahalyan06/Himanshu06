#include <stdio.h>
int main()
{
    // ram shyam variable is declared and having is garbage
    int ram, shyam;
    int *r;
    int *s;
    r = &ram, s = &shyam;
    *r = 5;
    *s = 10;
    // ram have 5 mangoes ,shyam have 10 mangoes

    printf(" Total mangoes count using pointer %d ", *r + *s);

    return 0;
}