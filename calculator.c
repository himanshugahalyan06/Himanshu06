#include<stdio.h>
int main (){
     char operator;
 float x,y;
 printf("Enter two number");
 scanf("%d %d ",&x,&y);

switch (operator){
case'+':
printf("%f ",x+y );
break;

case'-':
printf("%f ",x-y);
break;

case'*':
printf("%f ",x*y);
break;

case'/':
if (y !=0) {
    x/y;
    printf("%f",x/y);
}
else{
    printf("error \n");
}
break;


}

    return 0;
}
