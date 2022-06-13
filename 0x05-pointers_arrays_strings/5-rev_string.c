#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Reverse String
 *
 * @s: char s input
 *
 * Return: Always 0
*/
void rev_string(char *s)
{
	int i;
	char *a;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		a += s[i];
	}
	s = a;
}
