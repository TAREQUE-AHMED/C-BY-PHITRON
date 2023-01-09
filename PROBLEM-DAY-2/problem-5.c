#include<stdio.h>
int main(){
    float num;
    printf("Enter Number: ");
    scanf("%f", &num);
    int integer = num;
    float real = num - integer;
    printf("Integer Part= %d\n", integer);
    printf("Real Part= %.1f", real);

    return 0;
}