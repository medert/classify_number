
#include <stdio.h>
#include <math.h>

void instructions(void);
int positive(int);
int even(int);

int main(void)
{
    int number;
    
    printf("Please enter you number\n");
    scanf("%d", &number);
    
    if (positive(number) == 1 && even(number) == 1) {
        
        printf("The number is positive and even\n");
 
    } else if (positive(number) == 1 && even(number) == 0) {
        
        printf("The number is positive and odd\n");
        
    } else if (positive(number) == 0 && even(number) == 1) {
        
        printf("The number is negative and even\n");
        
    } else {
        
        printf("The number is negative and odd\n");
    }
   
    return 0;
}

void instructions(void)
{
    
    printf("This program helps to find out if a number positive or negative, odd or even");
    
}

int positive(int number)
{
    if (number > 0) {

        return 1;    

    } else {
        
        return 0;
    }
}


int even(int number)
{
    
    if (number % 2 == 0) {

        return 1;    

    } else {
        
        return 0;
    }
}