#include <stdio.h>

int main() {
    int a, d, n, i, t;
    printf("Enter first term: ");
    scanf("%d", &a);
    printf("Enter common difference: ");
    scanf("%d", &d);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    t = a;
    for (i = 1; i <= n; i++) {
        printf("%d ", t);
        t = t + d;
    }
return 0;
}
