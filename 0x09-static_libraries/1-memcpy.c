#include "main.h"
/**
 * main - copy number bytes form adress "from" to adress "to"
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n) 
	{
		*(dest + i) = *(src + i);
		i++;
	}	

	return (dest);

}
