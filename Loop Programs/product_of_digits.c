#include <stdio.h>
int main() {
    int n,s=1,d;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n<0)
    n=-n;
    if(n==0)
    printf("Product of digits is 0");
    else {
    while (n!=0) {
        d = n % 10;   
        s = s*d;       
        n = n/10;     
    }
    printf("Product of digits is %d", s);
   }
return 0;
}
