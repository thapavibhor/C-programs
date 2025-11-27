#include <stdio.h>
int main() {
    int n, i;
    int s= 0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++) {
        s += i * i; 
    }
    printf("Sum of squares of first %d natural numbers is %d\n",n,s);
return 0;
}
