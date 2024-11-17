#include <stdio.h>
int main()
{
    int flage = 0;
    int arr[8] = {10, 20, 100, 40, 10, 30, 40, 10};
    int key = 10;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == key)
        {
            flage = 1;
        }
    }
    if (flage == 0)
    {
        printf(" not present \n");
    }
    else
    {
        printf("present");
    }

    return 0;
}