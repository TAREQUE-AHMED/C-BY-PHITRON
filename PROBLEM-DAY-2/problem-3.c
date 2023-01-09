#include<stdio.h>
int main(){
    int sum, difference, div, product, modulus,num1,num2;
    printf("First Number: ");
    scanf("%d", &num1);
    printf("Second Number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    div = num1 / num2;
    product = num1 * num2;
    modulus = num1 % num2;
    printf("Sum= %d\n", sum);
    printf("Difference= %d\n",difference);
    printf("Div= %d\n", div);
    printf("Product= %d\n", product);
    printf("Modulus= %d\n",modulus);

    return 0;
}