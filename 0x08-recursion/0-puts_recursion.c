#include "main.h"
<<<<<<< HEAD

=======
/**
 * _puts_recursion - a function that prints a string
 *
 * @s: the char value
 *
 * Return: the 0 value
 */
>>>>>>> 44b3da17e9963f40952fcce4ff02849e700651a0
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
