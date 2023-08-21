#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: the string
 * Return:  length everytime
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
