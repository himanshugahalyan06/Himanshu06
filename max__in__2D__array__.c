#include <stdio.h>
int main()
{
    int arr[2][2] = {{5, 7},{ 9, 4}};
    int max = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
    }
    printf("%d", max);

    return 0;
}