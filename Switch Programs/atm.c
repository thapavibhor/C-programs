#include <stdio.h>
int main() {
    int ch;
    float balance = 0.0, amount;
    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if(amount > 0) {
                    balance += amount;
                    printf("Amount deposited successfully.\n");
                } else {
                    printf("Invalid amount! Deposit failed.\n");
                }
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                } else if(amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    printf("Invalid amount! Withdrawal failed.\n");
                }
                break;
            case 3:
                printf("Current balance = %.2f\n", balance);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(ch != 4);
return 0;
}
