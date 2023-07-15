#include <stdio.h>

/**
* main - Starting Point of the Program
* Return: Termination Point of the Program
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
