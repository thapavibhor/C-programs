#include <stdio.h>
int main() {
    int a, r, n, i, t;
    printf("Enter first term: ");
    scanf("%d", &a);
    printf("Enter common ratio: ");
    scanf("%d", &r);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    t = a;
    for (i = 1; i <= n; i++) {
        printf("%d ", t);
        t = t * r;
    }
return 0;
}
