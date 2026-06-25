//Add Two Numbers Using Pointers
#include <stdio.h>

int main()
{
    int a, b, *p1, *p2;
    scanf("%d%d", &a, &b);
    p1 = &a;
    p2 = &b;
    printf("Sum = %d", *p1 + *p2);
    return 0;
}