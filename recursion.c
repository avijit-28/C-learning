#include <stdio.h>

int sum1(int n);

int main(){
   printf("sum is : %d",sum1(5));
   return 0;
}

//recursive

int sum1(int n){
   printf("digits %d \n",n);
   if(n==1){
      printf("number %d \n",n);
      return 1;
   }
   int sumNm1 = sum1(n-1);
   printf("sumNm1 :%d and n: %d \n",sumNm1,n );
   int sumN = sumNm1+n;
   printf("%d + %d \n",sumNm1,n );
   printf("value %d \n",sumN);
   return sumN;
}