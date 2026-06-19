//Find Duplicate Elements in an Array
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Duplicate Elements:\n");
    for(i = 0; i < n; i++) {
        int count = 0;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count = 1;
                break;
     }
        }
        if(count) {
            int alreadyPrinted = 0;
            for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
             alreadyPrinted = 1;
            break;
            }
            }
            if(!alreadyPrinted)
             printf("%d ", arr[i]);
    }
    }
    return 0;
}