//
//  COP 2220- Assignment 6
// Purpose: Practice with Arrays
// 04/06/21
// Author: Zack Axel
//

#include <stdio.h>

#define SIZE 10
#define ROWS 4
#define COLS 3

void Q1 (void);
void Q2 (void);

int main() {
    
    //Q1 ();

    Q2 ();
    
    return 0;
}

void Q1 (void){
    
    int i;
    
    int sum = 0;
    
    int ten[SIZE];
  
    printf("Please scan in values => ");
    for(i = 0; i < SIZE; i++){
    scanf("%d", &ten[i]);
       sum += ten[i];
    }
    printf("     Index      Value        Percent of total\n");
    for( i = 0; i < 9; i++) {
        printf("\n%7d%13d%13.2f\n", i, ten[i], (ten[i]/ (double) sum) * 100);
    }
    
    
}

void Q2 (void){
    
    int a [ROWS][COLS];
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            printf("Please enter each quiz score => ");
            scanf("%d", &a[i][j]);
                       }
            printf("\n");}
    
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            printf("%4d", a[i][j]);
                       }
            printf("\n");}
    
    
    
    double total[4] = {0};
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            total[i] = total[i] + a[i][j];
                                    
                                    
                                    
                          }
       // printf("The total is : %.1f\n", total[i]);
        total[i] = total[i]/ COLS;
       // printf("The average is: %.1f\n",total[i]);
                        }
    
    double total_2[3] = {0};
    for(int j = 0; j < COLS; j++){
    for(int i = 0; i < ROWS; i++){
            total_2[j] = total_2[j] + a[i][j];}
       // printf("\nThe total is : %.f\n\n", total_2[j]);
        total_2[j] = total_2[j] / ROWS;
        //printf("The average is %.1f\n", total_2[j]);
    }
    printf("The totals are:\n\n");
    for(int i = 0; i < ROWS; i++){
        printf("%4.1f\n\n", total[i]);
    }
        
    for(int i = 0; i < COLS; i++ ) {
    printf("\n%4.1f\n", total_2[i]);
    }
            
        
    
}



