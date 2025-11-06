#include<stdio.h>
int main (){
    float cp,sp,r;
    printf("Enter the cost price :");
    scanf("%f",&cp);
    printf("Enter the selling price :");
    scanf("%f",&sp);
    if (sp > cp){
        r=sp-cp;
        printf("\n profit percnetage = %f%", (r/cp)*100);
    }
    else {
        r=cp-sp;
        printf("\n profit percnetage = %f", (r/cp)*100);        
    }
return 0;
}