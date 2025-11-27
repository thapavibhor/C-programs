#include <stdio.h>
int main() {
    int ch;
    float c, f;
    do {
        printf("\n--- Temperature Conversion Menu ---\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("Enter temperature in Celsius: ");
                scanf("%f",&c);
                f = (c * 9 / 5) + 32;
                printf("Temperature in Fahrenheit = %.2f\n",f);
                break;
            case 2:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &f);
                c = (f - 32) * 5 / 9;
                printf("Temperature in Celsius = %.2f\n",c);
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
