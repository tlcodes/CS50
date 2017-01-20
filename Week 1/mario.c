#include <stdio.h>
#include <cs50.h>

int height;
int main(void)
{
    // prompt the user for a number greater than 0 and under 23
    // keep doing so if input is not in this range
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);
    
    // create a loop to print row as long as the counter i, starting at 0, is less than height
    // so first row is on count 0!
    for (int i = 0; i < height; i++)
    {
        // inside loop to print space, starting always ONE space LESS than height,
        // and as long as this number is greater than the row count (i)
        for (int space = height - 1; space > i; space--)
        {
            printf(" ");
        }
        // inside loop to print bricks, as long as the bricks number is less than the row number (i) + 2,
        // because there's always TWO bricks MORE than row count (i)
        for (int bricks = 0; bricks < i + 2; bricks++)
        {
            printf("#");
        }
        // print a new line every time spaces and bricks printing is done
        printf("\n");
    }
}