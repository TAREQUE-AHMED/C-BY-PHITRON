/*
#include<stdio.h>
int main(){
    int n;
    for (int i = 0; i <n; i++)
    {
        if(i%2==0){
            printf("%d even number\n", i);
    }
    
    else
    {
        printf("%d odd number\n", i);
    }
}
}
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i = 1; i <= n; i++){
        if(n%i==0){
            printf("%d ", i);
            count++;
        }
    }
    printf("Number of divisor=%d\n", count);
    return 0;
}