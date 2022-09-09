#include <stdio.h>

/**
 * main -Prints numbers between 0 to 9 with commas and space
 *
 * Retun: Always 0 success
 */
int main(void)
{
	int digit;
	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
