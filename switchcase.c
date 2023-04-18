#include <stdio.h>

int main()
{
    int score;
    printf("give result : ");
    scanf("%d", &score);
    switch (score)
    {
    case 10:
        printf("student got A+");
        break;
    case 9:
        printf("student got A");
        break;
    case 8:
        printf("student got B+");
        break;
    case 7:
        printf("student got B");
        break;
    case 6:
        printf("student got C+");
        break;
    case 5:
        printf("student got C");
        break;
    case 4:
    case 3:
    case 2:
    case 1:
        printf("student got D");
        break;
    default:
        printf("failed");
        break;
    }
    return 0;
}