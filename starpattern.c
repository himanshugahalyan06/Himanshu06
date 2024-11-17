#include <stdio.h>
int main()
{
    int row = 6;
    for (int i = 1; i <= row; i++)
    {
        int space = row - i;
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k<= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
