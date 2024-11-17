#include <stdio.h>
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int start = 0;
    int end = 3;
    while (start < end)
    {
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}