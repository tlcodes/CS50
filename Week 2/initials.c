#include <ctype.h>
#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void) 
{
    // prompting for a string input
    string s = get_string();
    // check if string is not NULL first
    if (s != NULL)
    {
        // loop through each character of the string
        for (int i = 0, n = strlen(s); i < n; i++)
        {
        // Thanks man toupper for hinting at isalpha()
        // if the character before (i-1) the one we're iterating through is not a letter
        // and the current character is actually a letter..
            if (isalpha(s[i-1]) == 0 && isalpha(s[i]))
            {
             // then print the letter, uppercase
            printf("%c", toupper(s[i]));
            }
        }
        // print a new line when done
        printf("\n");
    }
}