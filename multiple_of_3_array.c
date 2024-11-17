#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 1; i < 10; i++)
    {
        arr[i] = 3 * i;
        printf("%d \n", arr[i]);
    }

    return 0;
}