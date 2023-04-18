#include <stdio.h>

int main()
{
    int sign;
    int a, b;
    printf("enter the value of a and b : ");
    scanf("%d,%d", &a, &b);
    // 1="+"
    // 2="-"
    // 3="*"
    // 4="/"
    printf("give AO 1-4 :");
    scanf("%d", &sign);
    switch (sign)
    {
    case 1:
        printf("summation of a and b is %d", a + b);
        break;
    case 2:
        printf("subtraction of a and b is %d", a - b);
        break;
    case 3:
        printf("multiplcation of a and b is %d", a * b);
        break;
    case 4:
        printf("division of a and b %d", a / b);
        break;
    default:
        printf("Invalid sign");
        break;
    }

    return 0;
}