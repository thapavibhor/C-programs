#include<stdio.h>
void main()
{
 int x;
 printf("Enter a year :");
 scanf("%d",&x);
 if (x%4==0)
 printf("Its a leap year ");
 else
 printf("Its not a leap year ");
 getch();
 clrscr();
}
