//. Input and Print Array Using Pointers
#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr;
    scanf("%d", &n);
    ptr = arr;
    for(i = 0; i < n; i++)
        scanf("%d", ptr + i);
    for(i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    return 0;
}