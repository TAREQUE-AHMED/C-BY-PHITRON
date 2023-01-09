#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter First Integer: ");
    scanf("%d", &num1);
    printf("Enter Second Integer: ");
    scanf("%d",&num2);

    int product = num1 * num2;
    printf("Product of above two integers = %d", product);
    return 0;
}