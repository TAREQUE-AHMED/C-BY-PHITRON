#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(b!=0){
        if(a%b == 0){
            printf("%d is divisible by %d\n", a, b);
        }
        else{
            printf("%d is not divisible by %d", a, b);
        } 
    }
    else{
        printf("You can not divisible by 0\n");
    }
    return 0;
}