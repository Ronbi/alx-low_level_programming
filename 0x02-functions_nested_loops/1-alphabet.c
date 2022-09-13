#include <stdio.h>

/**
 *function that prints the alphabets in lowercase, followed by a new line
 *
 * Return: Always 0 success
 */
void print_alphabet(void)
{

	char ch;
	
	ch = 'a';
	while (ch <='z')
	{

		 putchar(ch);
		 ch++;

	}

	putchar('\n');

}

