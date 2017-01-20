#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int encipher(int k);

int main(int argc, string argv[])
{
  if (argc != 2)
  {
    // if the number of arguments is not 2, print the usage and exit with error code 1
    printf("Usage: ./caesar k\n");
    return 1;
  }
    // convert key argument (string) to integer
    int k = atoi(argv[1]);
    
    // execute the encipher function
    encipher(k);

    // return 0;
}

int encipher(int k)
{
  /* // build an array of letters from A to Z, using a loop
  //declare first an array of 26 elements
  char beta[26];
  // initialiize a variable counter at 0, and a letter code at 65, increment both each time, until 26
    for (int i = 0, letter = 65; i < 26; i++, first++)
    {
    // each letter (code) is converted as a char, and added at the i'th index in array
      beta[i] = letter;
    }
    */
    // Initialize an array of the alphabet letters
  char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

  // prompt the user for plain text
  printf("plaintext: ");
  string plaintext = get_string();
  printf ("ciphertext: ");
  
  // iterate through the plaintext string, using counter j, and length of string l. Also declare c, the current character.
  for (int j = 0, l = strlen(plaintext), c; j < l; j++)
  {
    // assign the character code, an integer, to c (initializing  in the loop init doesn't update its value)
    c = plaintext[j];
    
    // if the character is a letter AND uppercase
    if (isalpha(c) && isupper(c))
    {
      // print the shifted character using the ciphering formula 
      // here substract 65, because first letter of alphabet A is 65, but in array is 0
      printf("%c", alpha[(c - 65 + k) % 26]);
    }
    // if the character is a letter and lower case.
    else if (isalpha(c) && islower(c))
    {
      // here substract 97, because first letter of alphabet a is 97, but in array is 0 (uppercase)
      // use the same array, convert to lowercase with tolower.
      printf("%c", tolower(alpha[(c - 97 + k) % 26]));
    }
    else
    {
      // print any other character as original
      printf("%c", c);
    }
  }
  printf("\n");
  return 0;
}