#include <stdio.h>
#include <cs50.h>
#include <math.h>

// variables for coins count (initialized at 0), and change (declared only)
int coins = 0;
float change;
int main(void)
{
    do
    {
        // prompts the user for a number, will be considered a float number by the program
    printf("O Hai! How much is owed? ");
    change = get_float();
    }
    // keeps prompting as long as the input is less than or equals to 0.
    while (change <= 0);
    
    // convert the float dollar numbers to cents (* 100), and round it.
    int rounded = round(change * 100);
    
    // Now we can use coins values in cents, so $0.25 becomes 25 cents, etc.
    // As per Zamyla's pseudocode in walkthrough, 
    // we always check if we can use the largest coin first,
    // and keep doing so as long as we can, then only go to the next largest one.
    
    // As long as owed changed is greater than 25,
    while (rounded >= 25)
    {
        // substract 25 from its value,
        rounded -= 25;
        // keep track of coins used by incrementing coins
        coins++;
    }
    // no quarters can be used, so try dimes if the change owed is 10 cents or more
    while (rounded >= 10)
    {
        // substract 10 from its value,
        rounded -= 10;
        // keep track of coins used by incrementing coins
        coins++;
    }
    while (rounded >= 5)
    {
        rounded -= 5;
        coins++;
    }
    while (rounded >= 1)
    {
        rounded -= 1;
        coins++;
    }
    printf("%i\n", coins);
}