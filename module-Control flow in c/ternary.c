/*
#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int abs = (num >= 0 ? num : -num);
    printf("%d", num);
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for (int cur = 1; cur <=N; cur++){
        if(N<=100){
        printf("%d Abracadabra\n", cur);
        }
    }
    return 0;
}
*/
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for (int  cur = 1; cur <=x; cur++)
    {
        if(x<=1200){
            printf("ABC\n");
        }
        else{
            printf("ARC");
        }
        
    }
    return 0;
}