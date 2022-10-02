#include "main.h"
/**
 * main - function that prints a string, followed by a new line, to stdout
 *
 * Return: void confirms correct answer
 */
void _puts(char *str)
{
	char *j;
	int m;

	j = str;

	for (m = 0; j[m]; m++)
	{
		_putchar (j[m]);

	}
	
	_putchar ('\n');
}
