#include<stdio.h>
int main(){
    int a;
    printf("Enter your age :");
    scanf("%d",&a);
    if (a>=18){
        printf("You are eligible to drive.\n");
    }
    else {
        printf("You are  not eligible to drive.\n");
        
    }
return 0;
}