#include<stdio.h>
int main(){
    int n=1,ch;
    float n1,n2;
    while (n!=0){
    printf("Enter two numbers :\n");
    printf("num1=");
    scanf("%f",&n1);
    printf("num2=");
    scanf("%f",&n2);
    printf("1 - Add\n");
    printf("2 - subtarct\n");
    printf("3 - mutliply\n");
    printf("4 - divide\n");
    printf("5 - exit\n");
    printf("Enter a choice :");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 :printf("%f + %f =%f\n",n1,n2,n1+n2);
        break;
    case 2 : printf("%f - %f =%f\n",n1,n2,n1-n2);
        break;
    case 3 : printf("%f x %f =%f\n",n1,n2,n1*n2);
        break;  
    case 4 : printf("%f / %f =%f\n",n1,n2,n1/n2);
        break;
    case 5 : n=0;
        break;
    default:
        break;
    }    
    }
return 0;
}