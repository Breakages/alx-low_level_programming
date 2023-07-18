#include "main.h"
/**
* _islower - Shows a 1 if the input is a lower character.
* if it is not lowercase then it shows a 0
*
* @c: The character in ASCII code
*
*  Return: 1 for lowercas character. 0 for the rest.
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
