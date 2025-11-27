#include <stdio.h>

int main() {
    int n,re=0,d;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        d = n % 10;     
        re = re * 10 + d; 
        n = n/10;           
    }
    printf("Reversed number is %d\n", re);
return 0;
}
