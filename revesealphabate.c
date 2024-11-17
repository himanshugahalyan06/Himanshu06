#include <stdio.h>
int main()
{
    int row = 6;
    for (int i = 1; i<=row; i++)
    {
        for ( int j = i; j >= 1; j--)
        {
            char ch = 'A' + j - 1;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}