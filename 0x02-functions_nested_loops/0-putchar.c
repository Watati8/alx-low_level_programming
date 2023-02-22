#include "main.h"

/**
  main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{  
    // Get the character to be written
    char ch = '1';
  
    // Write the Character to stdout
    for (ch = '1'; ch <= '9'; ch++)
        putchar(ch);
  
    return (0);
}
