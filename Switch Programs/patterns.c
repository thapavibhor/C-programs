#include <stdio.h>
int main() {
    int ch,i,j,n;
    do {
        printf("\n--- Pattern Printing Menu ---\n");
        printf("1. Square Pattern\n");
        printf("2. Right-Angled Triangle Pattern\n");
        printf("3. Pyramid Pattern\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                printf("Enter size of square: ");
                scanf("%d", &n);
                for(i = 1; i <= n; i++) {
                    for(j = 1; j <= n; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }
                break;
            case 2:
                printf("Enter number of rows for triangle: ");
                scanf("%d", &n);
                for(i = 1; i <= n; i++) {
                    for(j = 1; j <= i; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }
                break;
            case 3:
                printf("Enter number of rows for pyramid: ");
                scanf("%d", &n);
                for(i = 1; i <= n; i++) {
                    // Print spaces
                    for(j = i; j < n; j++)
                        printf(" ");
                    // Print stars
                    for(j = 1; j <= (2*i - 1); j++)
                        printf("*");
                    printf("\n");
                }
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
