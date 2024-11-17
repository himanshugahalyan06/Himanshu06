
#include<stdio.h>
int main(){
    int x=5;
    int y=10;
   int  temp=y;
    y=x;
    x=temp;
    printf("%d %d",x,y);
    
    
    return 0;
}