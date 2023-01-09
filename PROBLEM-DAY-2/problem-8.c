#include<stdio.h>
int main(){
    int fahrenheit;
    printf("Temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);
    float celsius = ((fahrenheit - 32) * 5) / 9;
    printf("Temperature in Celsius: %f C", celsius);
    return 0;
}