#include "main.h"
#include <stdio.h>
/**
 * main -  function that prints n elements of an array of integers, followed by a new line.
 *
 * Return: void confirms answer
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
	printf("%d", a[i]);

	if (i < n - 1)
	{
		printf(", ");
	}

	i++;

	}


	printf("\n");


}
