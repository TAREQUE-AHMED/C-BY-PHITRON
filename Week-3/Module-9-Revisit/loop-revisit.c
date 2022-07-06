#include<stdio.h>
int main(){
    for (int i = 1; i <=10; i++)
    {
        for (int j = 0; j <=10; j++)
        {
            printf("%d", i * j);
        }
        
        //if(i==6) continue;
        printf("\n");
    }
    return 0;
}