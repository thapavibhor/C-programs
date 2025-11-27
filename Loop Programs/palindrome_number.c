#include <stdio.h>
int main() {
    int n, o, r=0, d;
    printf("Enter an integer: ");
    scanf("%d",&n);
    o=n;
    if (n < 0) n = -n;
    while (n != 0) {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    if (o < 0) r = -r;
    if (o == r)
        printf("%d is a palindrome number\n", o);
    else
        printf("%d is not a palindrome number\n", o);
    return 0;
}
