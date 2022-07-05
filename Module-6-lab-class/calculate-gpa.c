#include<stdio.h>
#include<stdbool.h>
int main(){
    int number_of_subjects;
    scanf("%d", &number_of_subjects);
    bool failed = false;
    int total_grade_point = 0;
    for (int i = 1; i <=number_of_subjects; i++)
    {
        printf("Enter Your Marks:");
        int marks, gradePoint;
        scanf("%d", &marks);
        if(marks>=80){
            printf("Grade= A+\n");
            gradePoint = 5;
        }
        else if(marks>=70){
            printf("Grade = A\n");
            gradePoint = 4;
        }
        else if(marks>= 60){
            printf("Grade= B\n");
            gradePoint = 3;
        }
        else if(marks>=50){
            printf("Grade = C\n");
            gradePoint = 2;
        }
        else if(marks>=40){
            printf("Grade = D\n");
            gradePoint = 1;
        }
        else{
            printf("Grade= F\n");
            gradePoint = 0;
            failed = true;
        }
        total_grade_point += gradePoint;
        printf("Grade Point = %d\n", gradePoint);
    }
    if(failed){
        printf("You have failed\n Gpa =0.0\n");
    }
    else{
        double gpa = (double)total_grade_point / number_of_subjects;
        printf("Gpa=%lf\n", gpa);
    }
    return 0;
}