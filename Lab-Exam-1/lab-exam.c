#include<stdio.h>
int main(){
    int num, temp, sum = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        scanf("%d", &temp);
        if(temp<0){
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}