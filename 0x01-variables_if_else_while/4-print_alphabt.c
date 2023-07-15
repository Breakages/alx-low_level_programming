#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Starting Point of the Program
* Return: Termination Point of the Program
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

