#include <stdio.h>
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
void fibonacci(int n) {
    long long t1 = 0, t2 = 1, next;
    printf("Fibonacci Series: ");
    for(int i = 1; i <= n; i++) {
        printf("%lld ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("\n");
}
int isPrime(int n) {
    if(n <= 1)
        return 0;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int ch,n;
    do {
        printf("\n--- Menu ---\n");
        printf("1. Factorial\n");
        printf("2. Fibonacci Series\n");
        printf("3. Prime Check\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                printf("Enter a number: ");
                scanf("%d",&n);
                if(n<0)
                    printf("Factorial is not defined for negative numbers.\n");
                else
                    printf("Factorial of %d = %lld\n",n,factorial(n));
                break;
            case 2:
                printf("Enter number of terms: ");
                scanf("%d",&n);
                if(n<=0)
                    printf("Enter a positive number.\n");
                else
                    fibonacci(n);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &n);
                if(isPrime(n))
                    printf("%d is a Prime number.\n", n);
                else
                    printf("%d is not a Prime number.\n",n);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(ch!=4);
    return 0;
}
