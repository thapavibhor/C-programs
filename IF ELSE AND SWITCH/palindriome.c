#include<stdio.h>
int main(){
    int x,nx,rx=0,r=0;
    printf("Enter a nuumber :");
    scanf("%d",&x);
    nx=x;
    while (nx != 0)
    {
     r=(nx%10);
     rx=(rx*10)+r;
     nx=nx/10;1
    }
    if ( x == rx){
        printf("%d is a palindrome number",x);
    }
    else {
        printf("%d is not a palindrome number",x);

    }
    
}