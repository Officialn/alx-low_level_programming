#include "main.h"
/**
 * print_alphabet - function to print abc
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
_putchar('\n');
	
}
