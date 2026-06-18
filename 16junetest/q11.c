#include <stdio.h>
int main(){
    int row , column ,target;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);
    int matrix[row][column];
    printf("Enter the elements:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    int found = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(matrix[i][j] == target){
                printf("Element found at position (%d, %d)\n", i, j);
                found = 1;
                break;
            }
        }
        if(found){
            break;
        }
    }
}
