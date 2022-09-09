#include <stdio.h>

/**
 * main - Entry point
 * lowercase followed by a new line
 *
 * Return: Always 0 for success
 */
int main(void)
{

		int letter;

	        /* start from a */
                letter = 'a';

          	while (letter <= 'z')
		{

		putchar(letter);
                letter++;
		}

		putchar('\n');
		return (0);

}
