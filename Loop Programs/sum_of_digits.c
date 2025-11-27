#include <stdio.h>
int main() {
    int n,s=0,d;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n<0)
    n=-n;
    while (n!=0) {
        d = n % 10;   
        s += d;       
        n = n/10;     
    }
    printf("Sum of digits is %d\n", s);
return 0;
}
