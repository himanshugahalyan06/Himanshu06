#include <stdio.h>
int main()
{
    // %p is used to print values of pointers or address of a variable
    int a = 10;
    printf("address of a: %p\n", &a); // without pointer

    int *val = &a;
    printf("address of variable %p\n", val); // with pointer
    int b = 60;
    int *ptr = &b;
    printf("the address of b using pointer : %p\n", ptr);
    printf("address of ptr is : %p\n", &ptr);                   // sorted means either increasing or decresaing 

    return 0;
}