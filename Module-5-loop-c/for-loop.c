/*
#include<stdio.h>
int main(){
    int i, n, sum = 0;
    scanf("%d", &n);
    printf("i\t\tsum\n");
    // for (i = 1; i <= n; i++){
    // sum += i;
    for (i = 1; i <=n; i++){
        sum += 2*i;
        printf("%d\t\t%d\n", i, sum);
    }
    printf("Result = %d\n", sum);
    return 0;
}
*/
/*
#include<stdio.h>
/*
*************************
*                       * 
*                       *
*                       *
*                       *
*                       *
*************************

*/
/*
int main(){
    int i, n;
    scanf("%d", &n);
    printf("***************\n");
    for (i = 0; i <n-2 ; i++)
    {
        printf("*             *\n");
    }
    printf("***************");
    return 0;
}
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 0; i--){
        printf("%d\n", i);
    }
    return 0;
}