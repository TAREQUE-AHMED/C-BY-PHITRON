#include<stdio.h>
#include<stdlib.h>
int main(){
    srand(time(0));
    int hidden = rand()%100 + 1;
    printf("%d\n",hidden);
    int number_of_guesses = 0;
    while(number_of_guesses<3){
        int guess;
        scanf("%d", &guess);
        if(guess==hidden){
            printf("YOu are right\n");
            return;
        }
        else if (guess<hidden)
        {
            printf("Guess smaller\n");
        }
        else{
            printf("Guess larger\n");
        }
        number_of_guesses++;
    }
    if(number_of_guesses==3){
        printf("You failed\n");
    }
    return 0;
}