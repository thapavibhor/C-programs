#include<stdio.h>
void main(){
    int x,i,n=1,a=0;
    printf("Enter a number :");
    scanf("%d",&x);
    while ( n != 0){
        for (i=1;i<x;i++){
            if (x == i*i){
            a=1;
            break;
            }
            
        }
        n=0;    
    }   
        if ( a==1){
        printf("%d is a perfect square",x);
    }
    else{
        printf("%d is  not a perfect square",x);

    }

    
}