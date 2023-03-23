#include "main.h"
/**
  *print_alphabet_x10 - Print alphabet 10x
  *
  *Return : Always 0 (Succes)
  */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1 ; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
