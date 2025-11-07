#include<stdio.h>
int main(){
    int x,nx,r=1,rx,n=0,p,i;
    printf("Enter a Number :");
    scanf("%d",&x);
    nx=x;
    while (nx != 0)
    {
        nx=nx/10;
        n=n+1;
    }
    nx=x;   
    while (nx != 0)
    {
       r=nx%10;
       p=1;
       for(i=1;i<=n;i++){
        p=p*r;
       }
       rx=rx+p;
       nx=nx/10;
    }
    if (x == rx){
        printf("%d is a armstrong",x);
    }
    else{
        printf("%d is  not a armstrong",x);

    }
    
return 0;   
}