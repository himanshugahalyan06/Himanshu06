#include <stdio.h>
int main()
{
    int arr[3][3];
    int even = 2;
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = even;
            printf("%d ", arr[i][j]);
            even= even + 2;
            sum=sum+arr[i][j];
        }
        printf("\n");
    }
    printf("The Sum Of elements of this matrix is : %d",sum);

    return 0;
}