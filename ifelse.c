#include<stdio.h>

int main(){
    int result;
    printf("give the result : ");
    scanf("%d", &result);
    if (result<=55){
        printf("failing");
    }
    else {
        if(result<=65){
        printf("Unsatisfactory");
        }
        else{
        printf("satisfactory");
        }
    }

//     int num;
//     printf("enter an integer number : ");
//     scanf("%d",&num);
//     if (num%2==0){
//         printf("%d is an even number",num);
//     }
//     else{
//         printf("%d is an odd number",num);
//     }
//     return 0;
// }
// int main(){
//     int a,b;
//     printf("enter the value of a and b ");
//     scanf("%d,%d",&a,&b);
//     if (a==b){
//         printf("result: %d = %d",a,b);
//     }
//     else if (a>b){
//         printf("result: %d > %d",a,b);
//     }
//     else{
//          printf("result: %d < %d",a,b);
//     }
    return 0;
}

