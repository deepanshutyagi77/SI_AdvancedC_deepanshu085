#include <stdio.h>
    int EquilibriumIndex(int arr[], int n)
{
    int totalsum = 0, leftsum = 0;
    for (int i = 0; i < n; i++) {
        totalsum += arr[i];
    }
    for (int i = 0; i < n; i++){
        totalsum -= arr[i];  
                if (leftsum == totalsum){
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = EquilibriumIndex(arr, n);
    if (index != -1)
        printf("Equilibrium Index = %d\n", index);
    else
        printf("No Equilibrium Index Found\n");

    return 0;
}
