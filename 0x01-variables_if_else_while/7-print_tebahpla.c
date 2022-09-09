#include <stdio.h>

/**
 * main -Prints the lowercase alphabet in reverse order
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c;
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return(0);
}
