//
//
//
// 4/14/2021
// Author: Zack Axel
//

#include <stdio.h>

void sum_n_avg(double n1, double n2, double n3, double *sum, double *avg);

void final_grade(int points, char *gradePtr, char *missedPtr);


int main() {
  
    double one, two, three, sum_of_3 = 0, avg_of_3 = 0;
    printf("Enter three numbers => ");
    scanf("%lf%lf%lf", &one, &two, &three);
    sum_n_avg(one, two, three, &sum_of_3, &avg_of_3); // function call
    
    printf("%5.2f\n", one);
    printf("%5.2f\n%5.2f\n", two, three);
    printf("Sum of three = %5.2f\n", sum_of_3);
    printf("Average of three = %5.2f\n", avg_of_3);
    
    int pts;
    char missed_by_one;
    char course_grade;
  
    printf("Enter total course points => ");
    scanf("%d", &pts);
    final_grade(pts, &course_grade, &missed_by_one); // function call
    
  
    if(pts > 0) {
    printf("With %d points, your course grade is a : %c\n", pts, course_grade);
    printf("Did you miss the next letter grade with score of %d? %c", pts, missed_by_one); }
    else {
        printf("\nYou have entered a negative number"); }
 
    return 0;
}

void sum_n_avg(double n1, double n2, double n3, double *sum, double *avg){
    
    *sum = n1 + n2 + n3;
    *avg = *sum/3.0;
  
   

}


void final_grade(int points, char *gradePtr, char *missedPtr){
   
    
    
    *missedPtr = 'n';
    
    
    
    if (points >= 90 ) {
        *gradePtr = 'A' ; }
    else if(points >= 80 ) {
        *gradePtr = 'B';
        if(points == 89)
        *missedPtr = 'y';
    }
    else if (points >= 70) {
        *gradePtr = 'C';
        if(points == 79)
        *missedPtr = 'y';
    }
    else if (points >= 60){
        *gradePtr = 'D';
        if(points == 69)
        *missedPtr = 'y';
        
    }
    else if (points >= 0){
        *gradePtr = 'F';
        if(points == 59)
        *missedPtr = 'y';

            
        }
    else {
        printf("This is not a correct grading criteria");
        *gradePtr = '0';
        *missedPtr = '0';
        
        
    }
        
    
    
    
}





