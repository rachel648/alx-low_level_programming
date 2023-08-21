#include "main.h"
/**
* *_strncpy - copies src to dest
* @dest: destination
* @src:  source being copied
* @n:  amount of info to copy
* Return: Always dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
