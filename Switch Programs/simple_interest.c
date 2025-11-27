#include <stdio.h>
#include <math.h>
int main() {
    int ch;
    float pr,r,t,si, ci;
    do {
        printf("\n--- Interest Calculation Menu ---\n");
        printf("1. Simple Interest\n");
        printf("2. Compound Interest\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("Enter principal amount: ");
                scanf("%f", &pr);
                printf("Enter rate of interest (%%): ");
                scanf("%f", &r);
                printf("Enter time (in years): ");
                scanf("%f", &t);
                si = (pr*r*t)/100;
                printf("Simple Interest = %.2f\n", si);
                break;
            case 2:
                printf("Enter principal amount: ");
                scanf("%f", &pr);
                printf("Enter rate of interest (%%): ");
                scanf("%f", &r);
                printf("Enter time (in years): ");
                scanf("%f", &t);
                ci = pr*pow((1+r/100),t)-pr;
                printf("Compound Interest = %.2f\n",ci);
                break;
            case 3:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(ch!=3);
return 0;
}
