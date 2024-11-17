#include <stdio.h>
int main()
{
    int row = 6;
    for (int i = 1; i <= row; i++)
    {
        int s = row - i;
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        for (int l = i - 1; l > 0; l--)
            printf("%d", l);

        printf("\n");
    }

    return 0;
}