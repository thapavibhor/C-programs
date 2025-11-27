#include <stdio.h>
int main() {
    int n,c=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 0) {
        c=1; 
    } 
    else { 
        if (n > 0) {
            n= -n; 
        }
        while (n != 0) {
            n= n/10;
            c++;
        }
    }
    printf("Number of digits is %d\n", c);
return 0;
}

