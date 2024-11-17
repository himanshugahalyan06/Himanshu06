#include <stdio.h>
int main()
{
    int arr[8] = {10, 20, 100, 40, 10, 30, 40, 10};
    int key = 1000;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == key)
        {
            printf(" Yes Element is Present \n ");
        }
    }

    return 0;
}