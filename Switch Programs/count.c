#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    int ch;
    char str[1000];
    int v, c, d, i;
    do {
        printf("\n--- String Analysis Menu ---\n");
        printf("1. Count Vowels\n");
        printf("2. Count Consonants\n");
        printf("3. Count Digits\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar(); 
        switch(ch) {
            case 1:
                v = 0;
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
                for(i = 0; str[i] != '\0'; i++) {
                    char temp = tolower(str[i]);
                    if(temp=='a' || temp=='e' || temp=='i' || temp=='o' || temp=='u')
                        v++;
                }
                printf("Number of vowels = %d\n", v);
                break;
            case 2:
                c = 0;
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
                for(i = 0; str[i] != '\0'; i++) {
                    char temp = tolower(str[i]);
                    if((temp >= 'a' && temp <= 'z') && !(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u'))
                        c++;
                }
                printf("Number of consonants = %d\n", c);
                break;
            case 3:
                d = 0;
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
                for(i = 0; str[i] != '\0'; i++) {
                    if(str[i] >= '0' && str[i] <= '9')
                        d++;
                }
                printf("Number of digits = %d\n", d);
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
