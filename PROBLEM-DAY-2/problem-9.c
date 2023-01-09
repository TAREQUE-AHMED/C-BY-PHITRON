#include<stdio.h>
int main(){
    int days, year, month, ndays;
    printf("Enter number of days: ");
    scanf("%d", &ndays);
    year = (int)ndays / 365;
    ndays = ndays - (365 * year);
    month = (int)ndays / 30;
    days = (int)ndays - (month * 30);
    printf("%d Year(s)\n %d Month(s)\n %d Day(s)", year, month, days);
    return 0;
}