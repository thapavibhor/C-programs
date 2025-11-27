#include <stdio.h>
int main() {
    int ch;
    float km,m,cm,mm;
    do {
        printf("\n--- Unit Conversion Menu ---\n");
        printf("1. Kilometer to Meter\n");
        printf("2. Meter to Centimeter\n");
        printf("3. Centimeter to Millimeter\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                printf("Enter value in Kilometer: ");
                scanf("%f", &km);
                m= km*1000;
                printf("Meter = %.2f\n",m);
                break;
            case 2:
                printf("Enter value in Meter: ");
                scanf("%f", &m);
                cm = m * 100;
                printf("Centimeter = %.2f\n",cm);
                break;
            case 3:
                printf("Enter value in Centimeter: ");
                scanf("%f",&cm);
                mm=cm*10;
                printf("Millimeter = %.2f\n",mm);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(ch!=4);
return 0;
}
