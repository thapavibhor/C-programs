#include<stdio.h>
void main(){
    int x,i;
    printf("Enter a number :");
    scanf("%d",&x);
    printf("\nMultiplication table of %d\n",x);
    for(i=1;i<=10;i++){
        printf("%d X %d = %d \n",x,i,x*i);
    }
}