#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch (n%2) {
        case 0:
            printf("Even number\n");
            break;
        case 1:
            printf("Odd number\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}
