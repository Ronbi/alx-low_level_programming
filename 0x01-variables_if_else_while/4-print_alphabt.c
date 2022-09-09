#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: 0 (success)
 */
    int main(void)
{

	int letter;
	/* start from a */
	letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;

	}
	putchar('\n');
	return (0);
}
