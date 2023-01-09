#include<stdio.h>
int main(){
    int math_marks, english_marks, total_marks;
    
    printf("Enter Marks in English: ");
    
    scanf("%d", &english_marks);
    
    printf("Enter Marks in Math: ");
    
    scanf("%d", &math_marks);
    
    total_marks = math_marks + english_marks;

    printf("Total_marks: %d", total_marks);
    
    return 0;
}