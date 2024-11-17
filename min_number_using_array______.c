#include <stdio.h>
int main()
{
    int arr[5] = {20, 3, 40, 5, 60};
    int min = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf(" min number is : %d\n", min);

    return 0;
}