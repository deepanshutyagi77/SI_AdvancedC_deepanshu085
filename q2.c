//Insertion and Deletion in an Array

#include <stdio.h>
int main() {
    int n, i, pos, value;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter position for insertion: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &value);
    for(i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    n++;
    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\nEnter position to delete: ");
    scanf("%d", &pos);
    for(i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    printf("\nArray after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}