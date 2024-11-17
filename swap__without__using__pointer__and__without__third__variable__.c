#include <stdio.h>
int main()
{
   
    int a, b;
    a = 5;
    b = 10;
   a=a+b;
   b=a-b;
   a=a-b;

    printf("%d %d",a,b);

    return 0;
}

// null pointer is the pointer whose value is null (int*ptr=null);//
// void pointer is the pointer whose data type is void int a=10;//
// void*ptr1=&a //
// char ch='A'   ptr1=&ch one pointer is used for two variable //