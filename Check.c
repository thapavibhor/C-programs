#include<stdio.h>
void main()
{
 int a;
  printf("Enter a number ");
  scanf("%d",&a);
  if (a==0)
  {
    printf("\nZero");
  }
  else if (a>0)
  {
    printf("\nNumber is positive ");
  }
  else 
  {
    printf("\nNumber is negative ");
  }
 getch();
 clrscr();
}
