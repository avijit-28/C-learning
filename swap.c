#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the value of a and b : \n");
    scanf("%d,%d", &a, &b);
    c = a + b;
    a = c - a;
    b = c - b;
    printf("swaping value of a is %d and b is %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("swaping value of a is %d and b is %d \n", a, b);
    return 0;
}