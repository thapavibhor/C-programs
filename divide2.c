#include<stdio.h>
int main(){
     int x;
     printf("Enter a number :");
     scanf("%d",&x);
     if (x%3==0 && x%7==0){
        printf("%d is divisible by 3 and 7",x);
    }
     else {
        printf("%d is not divisible by 3 and 7",x);
    }
return 0;
}