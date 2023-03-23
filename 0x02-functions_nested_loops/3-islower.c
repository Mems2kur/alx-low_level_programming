#include "main.h"
/**
 *_islower - show 1 if the input c is a lower case or return 0
 *@c - the character in ASCII code
 *Return: return 1 for lowercaser character or 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
