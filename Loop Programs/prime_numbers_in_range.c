#include <stdio.h>
int main() {
    int a,b,i,j,f;
    printf("Enter start: ");
    scanf("%d", &a);
    printf("Enter end: ");
    scanf("%d", &b);
    for (i = a; i <= b; i++) {
        if (i <= 1) continue;
        f = 0;
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                f = 1;
                break;
            }
        }
        if (f == 0)
            printf("%d ", i);
    }
return 0;
}
