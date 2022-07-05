#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int reversed = 0;
    //int sum = 0;
    while(a>0){
        int digit = a % 10;
        a /= 10;
        //sum += digit;
        reversed = reversed * 10 + digit;
    }
    printf("Reversed:%d", reversed);
    // printf("Sum of Digit:%d", sum);
    return 0;
}