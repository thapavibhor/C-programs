#include<stdio.h>
int main(){
float a;
printf("Enter a number :");
scanf("%f",&a);
if (a>=0){
    printf("absolute value |%f| : %f",a,a );
}
else {
    printf("absolute value |%f| : %f",a,-a );
}
return 0;
}