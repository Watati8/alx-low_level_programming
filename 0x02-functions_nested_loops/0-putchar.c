#include <main.h>
/**
  main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "Valentine";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
