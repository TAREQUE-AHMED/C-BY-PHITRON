#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks>=50){
        printf("You have passed\n");
        printf("Congras\n");
    }
    else{
        printf("You have failed\n");
    }
    return 0;
}