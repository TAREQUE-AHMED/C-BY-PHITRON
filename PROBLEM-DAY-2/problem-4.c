#include<stdio.h>
int main(){
    float principle, time, rate;
    printf("Enter Principle: ");
    scanf("%f", &principle);
    printf("Enter Time: ");
    scanf("%f", &time);
    printf("Enter Rate: ");
    scanf("%f", &rate);

    float simpleInterest;
    simpleInterest=(principle*time*rate)/100;
    printf("Simple Interest = %f\n", simpleInterest);

    float principleInterest = principle + simpleInterest;
    printf("Principle Interest = %f", principleInterest);
    return 0;
}