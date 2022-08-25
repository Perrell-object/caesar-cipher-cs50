#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //argc has 2 arguments
    if (argc == 2)
    {
        //Change into int and check whether int is viable
        int t = atoi(argv[1]);

        if (t < 1)
        {
            printf("Usage: ./caeser key\n");
        }
        else
        {
            //Prompt user for plaintext
            string plain_text = get_string("Plaintext: ");

            //Encrypts plain text
            printf("ciphertext: ");
            for (int i = 0, n = strlen(plain_text); i < n; i++)
            {
                if (plain_text[i] == ' ')
                {
                    printf("%c", plain_text[i]);
                }
                if (ispunct(plain_text[i]))
                {
                    printf("%c", plain_text[i]);
                }
                //is alphabetic
                if (isalpha(plain_text[i]))
                {
                    //uppercase
                    if (isupper(plain_text[i]))
                    {
                        printf("%c", (((plain_text[i] - 65) + t) % 26) + 65);
                    }
                    //lowercase
                    else if (islower(plain_text[i]))
                    {
                        printf("%c", (((plain_text[i] - 97) + t) % 26) + 97);
                    }
                }
            }
            printf("\n");
            return 0;
        }
    }
    //additional checks
    else if (argc > 2)
    {
        //Exit status
        printf("Usage: ./caeser key\n");
        return 1;
    }
    else
    {
        //Exit status
        printf("Usage: ./caeser key\n");
        return 1;
    }
}