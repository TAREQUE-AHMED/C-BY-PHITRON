#include<stdio.h>
int main(){
    int sum = 0;
    //for (int i = 1; i <= 100; i++)
    //for (int i = 1; i <= 29; i+=2)
    for (int i = 50; i>= 31; i--)
    {
        sum += i;
        printf("Add %d: new sum= %d\n", i, sum);
    }
    printf("Sum=%d", sum);
    return 0;
}