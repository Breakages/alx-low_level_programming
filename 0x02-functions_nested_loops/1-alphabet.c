#include "main.h"
/**
* print_alphabet - This prints all the alphabets in lowercase.
* Return: This ends the program
*/
void print_alphabet(void)
{
	int i;
	for (i=97;i<122;i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
