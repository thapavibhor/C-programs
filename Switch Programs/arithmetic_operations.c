#include <stdio.h>
int main() {
    int ch;
    float a,b;
    printf("\n---- ARITHMETIC CALCULATOR ----\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    switch(ch) {
        case 1:
            printf("Result = %.2f\n",a+b);
            break;
        case 2:
            printf("Result = %.2f\n",a-b);
            break;
        case 3:
            printf("Result = %.2f\n",a*b);
            break;
        case 4:
            if (b!=0)
                printf("Result = %.2f\n",a/b);
            else
                printf("Error: Division by zero not allowed.\n");
            break;
        case 5:
            printf("Result = %d\n",(int)a%(int)b);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
