#include "main.h"


/**
 * _strlen - returns length of a string
 *
 * @s: char s  input
 *
 * Return: Always 0
*/
int _strlen(char *s)
{
	int len = 0;

	while( *s++ )
		len++;
	return (len);
}
