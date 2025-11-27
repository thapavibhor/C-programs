#include <stdio.h>
int main() {
    int n, o, r = 0, d, c = 0, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    o = n;
    temp = n;
    while (temp != 0) {
        temp /= 10;
        c++;
    }
    temp = n;
    while (temp != 0) {
        d = temp % 10;
        int p = 1, i;
        for (i = 1; i <= c; i++)
            p *= d;
        r += p;
        temp /= 10;
    }
    if (o == r)
        printf("%d is an Armstrong number\n", o);
    else
        printf("%d is not an Armstrong number\n", o);
    return 0;
}
