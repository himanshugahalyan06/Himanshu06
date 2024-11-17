#include <stdio.h>
int main()
{

    int size = 5;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i * 2;
        printf("%d", arr[i]);
    }

    return 0;
}