#include <stdio.h>
#include <string.h>
int main() {
    int ch;
    do {
        printf("\n--- Reverse Menu ---\n");
        printf("1. Reverse a Number\n");
        printf("2. Reverse a String\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar(); 
        switch(ch) {
            case 1: {
                int n, rev = 0, t, digit;
                printf("Enter a number: ");
                scanf("%d", &n);
                t = n;
                while(t != 0) {
                    digit = t % 10;
                    rev = rev * 10 + digit;
                    t /= 10;
                }
                printf("Reversed Number = %d\n", rev);
                break;
            }
            case 2: {
                char str[1000];
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
                str[strcspn(str, "\n")] = '\0';
                printf("Reversed String = ");
                for(int i = strlen(str) - 1; i >= 0; i--)
                    printf("%c", str[i]);
                printf("\n");
                break;
            }
            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(ch != 3);
return 0;
}
