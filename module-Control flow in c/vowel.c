
#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='o' || ch=='u' || ch=='i'){
        printf("vowel");
    }
    else{
        printf("consonant");
    }
    return 0;
}

