#include<stdio.h>
#include<stdbool.h>
int main(){
    int year;
    printf("Enter your year: ");
    scanf("%d", &year);
    bool is_leap_year = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
    if(is_leap_year){
        printf("It is a leap year");
    }
    else{
        printf("It is not a leap year");
    }
    return 0;
}