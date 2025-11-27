#include <stdio.h>
int main() {
    int ch, n, i;
    int arr[100];
    do {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Sum of Array Elements\n");
        printf("2. Maximum Element\n");
        printf("3. Minimum Element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
            case 2:
            case 3:
                printf("Enter number of elements in the array: ");
                scanf("%d", &n);
                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++)
                    scanf("%d", &arr[i]);
                if(ch == 1) { 
                    int sum = 0;
                    for(i = 0; i < n; i++)
                        sum += arr[i];
                    printf("Sum of array elements = %d\n", sum);
                }
                else if(ch == 2) { 
                    int max = arr[0];
                    for(i = 1; i < n; i++)
                        if(arr[i] > max)
                            max = arr[i];
                    printf("Maximum element = %d\n", max);
                }
                else if(ch == 3) { 
                    int min = arr[0];
                    for(i = 1; i < n; i++)
                        if(arr[i] < min)
                            min = arr[i];
                    printf("Minimum element = %d\n", min);
                }
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
