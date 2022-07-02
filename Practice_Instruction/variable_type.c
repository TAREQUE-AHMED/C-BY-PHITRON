#include<stdio.h>
int main(){
/*int price = 20;
printf("price = %d\n", price);
float temparature = 30.5;
printf("temparature = %f\n", temparature);
double temparature2 = 2.01;
printf("temparature2 = %lf\n", temparature2);
char character ='t';
printf("character =%c\n", character);*/
/*int marks_bangla;
int marks_math;
printf("Enter Your marks in bangla:");
scanf("%d", &marks_bangla);
printf("Enter Your marks in math:");
scanf("%d", &marks_math);
int total_marks = marks_bangla + marks_math;
printf("total marks = %d", total_marks);
*/
int marks_bangla;
int marks_math;
printf("Enter Your marks in Bangla and Math:");
scanf("%d %d", &marks_bangla, &marks_math);
int total_marks= marks_bangla + marks_math;
printf("Total_marks = %d", total_marks);

getch();
}
