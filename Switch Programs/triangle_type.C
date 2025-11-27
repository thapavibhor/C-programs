#include <stdio.h>
int main() {
    int ch;
    float a, b, c;
    do {
        printf("\n--- Triangle Type Menu ---\n");
        printf("1. Check Triangle Type\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("Enter three sides of the triangle: ");
                scanf("%f %f %f", &a, &b, &c);
                if(a+b>c && a+c>b && b+c> a) {
                    if(a == b && b == c)
                        printf("Triangle is Equilateral.\n");
                    else if(a == b || b == c || a == c)
                        printf("Triangle is Isosceles.\n");
                    else
                        printf("Triangle is Scalene.\n");
                } else {
                    printf("Invalid triangle! The sides cannot form a triangle.\n");
                }
                break;
            case 2:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(ch!=2);
return 0;
}
