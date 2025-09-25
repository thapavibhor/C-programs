 #include<stdio.h>
 void main()
 {
 int x,y,z;
 printf("Enter values ");
 printf("\nNum1:");
 scanf("%d",&x);
 printf("\Num2:");
 scanf("%d",&y);
 printf("\nNum3:");
 scanf("%d",&z);
 if (x>y && x>z)
 {
 printf("\nNum1 is largest");
 }
 else if (y>x && y>z)
 {
 printf("\nNum2 is largest");
 }
 else
 {
 printf("\nNum3 is largest");
 }
 getch();
 clrscr();
}
