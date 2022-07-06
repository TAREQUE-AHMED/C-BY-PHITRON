 #include<stdio.h>
 #include<math.h>
 int main(){
     float number = 10000;
     printf("%f\n", number);
     double number1 = 10000;
     printf("%lf\n", number1);
     double number3 = 500;
     double cube = sqrt(number3);
     printf("%lf\n", cube);
     double number4 = 100.5;
     double cc = ceil(number4);
     printf("%d\n",(int) cc);
     double number5= 100.5;
     double acc = floor(number5);
     printf("%d\n",(int) acc);
     return 0;
 }