#include <stdio.h>
int main()
{
    int arr[2][2] = {{5, 7}, {9, 2}};
    int min = arr[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (min > arr[i][j])
                min = arr[i][j];
        }
    }
    printf("%d", min);

    return 0;
}