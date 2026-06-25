//Search Element Using Pointers
#include <stdio.h>

int main()
{
    int arr[100], n, key, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        if(*(arr + i) == key)
    {
            printf("Found");
            return 0;
    }
    }
    printf("Not Found");
    return 0;
}