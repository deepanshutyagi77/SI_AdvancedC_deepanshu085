//Call by Value vs Call by Reference


#include <stdio.h>
void callByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside Function (Value): a=%d b=%d\n", a, b);
}
void callByReference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 20;
    callByValue(x, y);
    printf("After Call by Value: x=%d y=%d\n", x, y);
    callByReference(&x, &y);
    printf("After Call by Reference: x=%d y=%d\n", x, y);
    return 0;
}