#include <stdio.h>
int main()
{
    int arr[2][2];
    int even = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr[i][j] = even;
            even = even + 2;
            printf("%d ", even);
        }
        printf("\n");
    }

    return 0;

}