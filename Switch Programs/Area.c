#include <stdio.h>
int main() {
    int c;
    float r,l,br,ba,h,a;
    printf("---- AREA CALCULATOR ----\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            a= 3.14*r*r;
            printf("Area of Circle = %.2f\n",a);
            break;
        case 2:
            printf("Enter length: ");
            scanf("%f", &l);
            printf("Enter breadth: ");
            scanf("%f", &br);
            a= l*br;
            printf("Area of Rectangle = %.2f\n",a);
            break;
        case 3:
            printf("Enter base: ");
            scanf("%f", &ba);
            printf("Enter height: ");
            scanf("%f", &h);
            a= 0.5*ba*h;
            printf("Area of Triangle = %.2f\n",a);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
return 0;
}
