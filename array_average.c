#include<stdio.h>
int main (){
    
    int size;
     printf("Enter the size of array");    // this is one D Array//
    scanf("%d",& size);
    float arr[size];

    for (int i=0;i<size;i++){
        float input ;
        scanf("%f",& input);
        arr[i]=input;
    }
    
    float sum=0 ;
for( int i=0;i<size;i++){
    sum=sum+arr[i];
}
float ans= sum/size;
printf("%.2f",ans);
    
    
    
    
    
    
    
    
    
    
    return 0;
}