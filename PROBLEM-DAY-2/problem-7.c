#include<stdio.h>
int main(){
    int celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit= %.1f F", fahrenheit);
    return 0;
}