#include<stdio.h>
int main(){
/*int num1,num2;

scanf("%d %d", &num1, &num2);
int jogfol = num1+ num2;
printf("%d + %d =%d\n",num1,num2, jogfol);

int biogfol = num1 - num2;
printf("%d - %d= %d\n", num1,num2, biogfol);


int gunfol = num1 * num2;
printf("%d * %d= %d\n", num1, num2, gunfol);


int vagfol = num1 / num2;
printf("%d / %d=%d\n", num1,num2, vagfol);


int vagsesh = num1 % num2;
printf("%d %% %d= %d\n", num1,num2,vagsesh);
*/
double num1,num2;

scanf("%lf %lf", &num1, &num2);
double jogfol = num1+ num2;
printf("%.2lf + %.2lf =%.2lf\n",num1,num2, jogfol);

double biogfol = num1 - num2;
printf("%.2lf - %.2lf= %.2lf\n", num1,num2, biogfol);


double gunfol = num1 * num2;
printf("%.2lf * %.2lf= %.2lf\n", num1, num2, gunfol);


double vagfol = num1 / num2;
printf("%.2lf / %.2lf=%.2lf\n", num1,num2, vagfol);



getch();

}
