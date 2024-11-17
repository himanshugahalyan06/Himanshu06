#include <stdio.h>
int main()
{

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] % 2 == 0)
            sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}