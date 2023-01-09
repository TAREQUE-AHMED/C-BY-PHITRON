#include<stdio.h>
int main(){
    int workingHour, salaryAmount;
    printf("Enter working hours: ");
    scanf("%d", &workingHour);
    printf("Enter your Salary: ");
    scanf("%d", &salaryAmount);
    float totalSalary = workingHour * salaryAmount;
    printf("Salary= %.2f", totalSalary);
    return 0;
}