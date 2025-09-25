#include<stdio.h>
int ar [5];

void input_ar(void)
{
 int i;
 for (i=0;i<=4;i++)
 {
 printf("Enter arey at index %d :",ar[i]);
 scanf("%d",&ar[i]);
 }
}
void main()
{
 int i,max=0,max2;
 input_ar();
 printf("\n");
 for (i=0;i<5;i++)
 {
 if (ar[i]>max)
 {
  max=ar[i];
  }
 }
 for (i=0;i<5;i++)
 {
 if (ar[i]==max)
  continue ;
 else if(ar[i]>max2)
  max2=ar[i];
 }
 printf("max : %d\nsecond max : %d",max,max2);
 getch();
 clrscr();
}