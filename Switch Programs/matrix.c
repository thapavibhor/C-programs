#include <stdio.h>
int main() {
    int ch, i, j, rows, cols;
    int mat1[10][10], mat2[10][10], result[10][10];
    do {
        printf("\n--- Matrix Operations Menu ---\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Subtraction\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
            case 2:
                printf("Enter number of rows (max 10): ");
                scanf("%d", &rows);
                printf("Enter number of columns (max 10): ");
                scanf("%d", &cols);
                printf("Enter elements of first matrix:\n");
                for(i = 0; i < rows; i++)
                    for(j = 0; j < cols; j++)
                        scanf("%d", &mat1[i][j]);
                printf("Enter elements of second matrix:\n");
                for(i = 0; i < rows; i++)
                    for(j = 0; j < cols; j++)
                        scanf("%d", &mat2[i][j]);
                for(i = 0; i < rows; i++) {
                    for(j = 0; j < cols; j++) {
                        if(ch == 1) 
                            result[i][j] = mat1[i][j] + mat2[i][j];
                        else        
                            result[i][j] = mat1[i][j] - mat2[i][j];
                    }
                }
                printf("Resultant Matrix:\n");
                for(i = 0; i < rows; i++) {
                    for(j = 0; j < cols; j++)
                        printf("%d\t", result[i][j]);
                    printf("\n");
                }
                break;
            case 3:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(ch != 3);
return 0;
}
