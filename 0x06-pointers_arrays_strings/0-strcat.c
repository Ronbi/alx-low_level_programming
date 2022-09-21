#include "main.h"

/**
 * function that concentrates two strings
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
int length, t;

length = 0;
while (dest[length] != '\0')
{
	length++;
}

for (t = 0; src[t] != '\0'; t++, length++)
{
	dest[length] = src[t];
}
dest[length] = '\0';
return (dest);

}
