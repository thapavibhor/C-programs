#include<stdio.h>
int main(){
    int a,b,c,x=0;
    printf("Enter the angles of the triangles :\n ");
    printf("angle A :");
    scanf("%d",&a);
    printf("angle B :");
    scanf("%d",&b);
    printf("angle C :");
    scanf("%d",&c);
    if ((a+b+c) == 180){
        printf("It's a valid and ");
        x=1;
    }
    else {
        printf("It's not a valid triangle.\n");
        return 0;
    }
    if (x=1){
        if(a==b && b==c && c==a){
            printf("Equilateral trianlge.\n");
        }
        else if (a==90 || b==90 || c==90){
            printf("Right trianlge.\n");
        }
        else if ((a==b && b!=c) || (b==c && b!=a) || (c==a && c!=b)){
            printf("Isosceles triangle.\n");
        }
        else {
            printf("Scalene trianlge.\n");
        }
    }
return 0;
}