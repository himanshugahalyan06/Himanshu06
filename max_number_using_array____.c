#include <stdio.h>
int main()
{
    int arr[5] = {20, 3, 40, 5, 60};
    int max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf(" max number is : %d\n", max);

    return 0;
}