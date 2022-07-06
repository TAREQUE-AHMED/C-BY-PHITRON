/*
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &b, &a);
    int gcd = 1;
    for (int i = 1; i <=a && i<=b ; i++)
    {
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    printf("%d\n", gcd);

    return 0;
}
*/
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    while(a!=0){
        int rem = b % a;
        b = a;
        a = rem;
        printf("%d %d\n", a, b);
    }
    printf("gcd= %d\n", b);
    return 0;
}