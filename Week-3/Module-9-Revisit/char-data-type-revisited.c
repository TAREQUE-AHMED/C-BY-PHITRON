#include<stdio.h>
#include<ctype.h>
int main(){
   /* for (int i = 32; i <=126; i++)
    {
        printf("%d\t %c\n", i, i);
    }
    */
  /* char ch;
   scanf("%c", &ch);
   if('A'<=ch && ch<='Z'){
       printf("Uppercase");
   }
   else if('a'<=ch && ch<='z'){
       printf("Lowercase");
   }
   else if('0'<=ch && ch<='9'){
       printf("Digit");
   }
   else{
       printf("Others");
   }
   */
   char ch;
   scanf("%c", &ch);
   //if('A'<= ch && ch<='Z'){
      // int pos = ch - 'A' + 'a' ;
      if(isupper(ch)){
      // char lo = 'a' + pos;

       printf("Lower= %c", tolower(ch));
   }
   else{
       printf("Not uppercase");
   }
   return 0;
}