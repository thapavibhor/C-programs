#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i, s = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    if (n >= 1) 
    s += a;
    if (n >= 2) 
    s += b;
    for (i = 3; i <= n; i++) {
        c = a + b;
        s += c;
        a = b;
        b = c;
    }
    printf("Sum of Fibonacci series = %d", s);
return 0;
}

