#include <stdio.h>
int main()
{

    int arr[3][3] = {{16, 0, 0}, {0, 2, 0}, {0, 0, 6}};
    int det = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
            if (i == j)
            {
                det = det * arr[i][j];
            }
        }
        printf("\n");
    }

    printf("Determinant is :%d", det);

    return 0;
}