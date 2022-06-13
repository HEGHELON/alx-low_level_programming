#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - print the reverse of a string
 *
 * @s: char pointer s
 *
 * Return: Always 0
*/
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i > 0; i--)
	{
		printf("%s". s[i]);
	}
	printf("\n");
}
