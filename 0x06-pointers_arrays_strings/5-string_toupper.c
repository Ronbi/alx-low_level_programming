#include "main.h"
/**
 *  function that changes all lowercase letters of a string to uppercase
 *
 *  Return: pointer to upper case string
 */
char *string_toupper(char *x)
{
	int length;

	length = 0;
	while (x[length] != '\0')
	{
		if (x[length] >= 97 && x[length] <= 122)
		{
			x[length] = x[length] - 32;
		
		}
		length++;
	}
	return (x);
}
