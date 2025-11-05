#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,d,r1,r2,i;
    printf("ax^2 + bx +c \n");
    printf("Enter the value of a,b,c in quadratic eq \n");
    printf("a =");
    scanf("%f",&a);
    printf("b =");
    scanf("%f",&b);
    printf("c =");
    scanf("%f",&c);
    if ((b*b) > 4*a*c ){
        d= (b*b)-(4*a*c);
        r1= (-b + sqrt(d))/(2*a);
        r2= (-b - sqrt(d))/(2*a);
        printf("\nRoot of eq = %f , %f ",r1,r2);     
    
    }
    else if ((b*b) == 4*a*c){
        r1= (-b)/(2*a);
        printf("\nRoot of eq = %f , %f  ",r1,r1);
    }
    else if ((b*b) < 4*a*c  ){
        d= (b*b)-(4*a*c);
        i=(sqrt(-d))/2*a;
        r1=(-b)/(2*a);
        printf("\n Root of eq =");
        printf(" %f + %fi ,",r1,i);
        printf(" %f - %fi ",r1,i);
    }
return 0;    
}