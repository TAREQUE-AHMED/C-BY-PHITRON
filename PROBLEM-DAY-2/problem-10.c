#include<stdio.h>
int main(){
    float weightItem1, weightItem2, nItem1, nItem2,average;
    printf("Weight Item1: ");
    scanf("%f", &weightItem1);
    
    printf("No of Item1: ");
    scanf("%f", &nItem1);
    
    printf("Weight Item2: ");
    scanf("%f", &weightItem2);

    printf("No of Item2: ");
    scanf("%f", &nItem2);
    average = ((weightItem1 * nItem1) + (weightItem2 * nItem2)) / (nItem1 + nItem2);
    printf("Average Value = %f", average);
    return 0;
}