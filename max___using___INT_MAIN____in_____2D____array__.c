#include <stdio.h>
 #include<limits.h>
int main()
{
    int arr[2][2] = {{-5, -7},{ -9, -4}};
    int max = INT_MIN;                                                //if there is negative number in matrix then for find max number we initialise with INT_MIN
    for (int i = 0; i < 2; i++)                               //FOR INT_MIN WRITE A header file #include<limits.h>
    {
        for (int j = 0; j < 2; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
    }
    printf("%d", max);

    return 0;
}