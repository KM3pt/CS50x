/* "PSet1 GREEDY"      
        from CS50                     
               by               
               KM3 (pt_2015) */

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // get own
    printf("How much change is owed?");
    
    float amount;
    
    do
    {
        amount = GetFloat();
        
        if (amount < 0)
        {
            return 1;
        }
    }
    while (amount < 0);
    
    // cents converted
    float cents = round (amount);
    int coins = 0;
    
    do
    {
        // quarters
        while (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        // dimes
        while (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        // nickles
        while (cents >= 5) 
        {
            cents -= 5;
            coins++;
        }
        // pennies
        while (cents >= 1) 
        {
            cents -= 1;
            coins++;
        }
    }
    // output
    while (cents > 0);
    printf("%d\n", coins);
}
