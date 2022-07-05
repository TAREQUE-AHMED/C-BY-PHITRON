/*
#include<stdio.h>

// Even or odd number

int main(){
    int number;
    scanf("%d", &number);
    if(number %2 == 0){
        printf("Number is Even Number");
    }
    else{
        printf("Number is Odd Number");
    }
    return 0;
} 
*/
#include<stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    if(number>0){
        printf("1");
    }
    else if(number==0){
        printf("0");
    }
    else{
        printf("-1");
    }
    return 0;
}