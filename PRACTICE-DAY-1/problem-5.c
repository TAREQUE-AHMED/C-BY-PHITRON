#include<stdio.h>
int main(){
    int height;
    printf("Enter Your Height: ");
    scanf("%d", &height);
    int feet, inch;
    feet = height/ 12;
    inch = height % 12;
    printf(" Your height is %d feet %d inches", feet, inch);
    return 0;
}