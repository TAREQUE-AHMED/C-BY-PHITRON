#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b <= b+c && a+b<=a+c){
        printf("%d\n", a + b);
    }
    else if(b+c <= a+b && b+c <= a+c)
    {
        printf("%d\n", b + c);
    }
    else if
        (a + c <= a + b && a + c <= b + c)
    {
        printf("%d\n", a + c);
    }
    return 0;
}