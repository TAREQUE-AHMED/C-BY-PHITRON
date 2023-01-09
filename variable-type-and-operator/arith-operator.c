#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int add = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, add);

    int sub = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, sub);

    int multi = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, multi);

    int divi = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, divi);

    return 0;
}