#include<stdio.h>
#include<limits.h>
int main(){
   // printf("%d\n", INT_MAX);
   // printf("%d", INT_MIN);

   //printf("%d", SHRT_MAX);
  // printf("%lld\n", LONG_MAX);
   long long limit = 10000000000;
   printf("%lld", limit);
   return 0;
}

/*
int: -2^31 to  2^31-1
    -2147483648   2147483647

    short int / short:
    -2^15 to 2^15-1
    -32767    32767

    long long: 
    -2^63   to  2^63
2147483647    
*/