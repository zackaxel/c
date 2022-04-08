//
// COP 2220- Assignment 5
// Author: Zack Axel
// Date: 03/25/2021
// Assignment 5
//

#include <stdio.h>

int main() {
    
    int n;
    int x;
    int sum = 0;
    
        // prompt user
        
        printf("Enter a positive number => ");
        scanf(" %d", &n);
    
        // while loop
    
    while (n >= 1)
    {
        
        x = n % 10;
        n = n / 10;
    
        printf(" %d", n);
        printf(" %d", x);
        
        sum += x;
       
        printf(" %d\n",sum);
        
    }
        
        // if, else
    
    if (sum % 9 ==0)
        printf("The sum is divisible by nine. ");
    else
        printf("The sum is not divisble by nine. There will be a remainder.");
  
    
    return 0;
}



