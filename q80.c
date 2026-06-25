//Kadane's Algorithm (Maximum Subarray Sum)
#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int maxSum, currentSum;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    maxSum = currentSum = arr[0];
    for(i = 1; i < n; i++)
    {
        if(currentSum + arr[i] > arr[i])
            currentSum += arr[i];
        else
            currentSum = arr[i];
        if(currentSum > maxSum)
            maxSum = currentSum;
    }
    printf("Maximum Sum = %d", maxSum);
    return 0;
}