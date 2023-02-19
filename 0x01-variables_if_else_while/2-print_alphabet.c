#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void )
{
   

    char alphabet = 'a';

     

    while (alphabet <= 'z')
    {
        // print the value of the variable 
        putchar(alphabet);

        // increment the variable (ie: a becomes b)
        alphabet++;
    }

    putchar('\n');
    return (0);
}

