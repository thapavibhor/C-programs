#include <stdio.h>
int main() {
    int m,y;
    printf("Enter month number (1-12): ");
    scanf("%d", &m);
    printf("Enter year: ");
    scanf("%d", &y);
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n");
            break;
        case 2:
            if ((y%4==0) && (y%100!=0) || (y%400==0))
                printf("29 days (Leap Year)\n");
            else
                printf("28 days\n");
            break;
        default:
            printf("Invalid month number!\n");
    }
    return 0;
}
