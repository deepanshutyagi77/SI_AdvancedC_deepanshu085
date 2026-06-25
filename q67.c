//Function to Check Perfect Number

#include <stdio.h>
int isPerfect(int n)
{
    int i, sum = 0;
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }
    return sum == n;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(isPerfect(n))
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
    return 0;
}