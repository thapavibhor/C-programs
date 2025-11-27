#include<stdio.h>
int main(){
 float x,a,b,r,i;
 int n=1;
 printf("Enter a number :");
 scanf("%f",&x);
 while (n != 0)
 {
  for (i=0;i<x;i++)
  {
   if (x<=(i*i))
    {
     a=i-1.0;
     break;
    }
  }
 n=0;
 }
 b=x-(a*a);
 r=a+(b/(2*a)) - 0.1;
 printf("\n Square root of %f = %f",x,r);
 return 0;
}
