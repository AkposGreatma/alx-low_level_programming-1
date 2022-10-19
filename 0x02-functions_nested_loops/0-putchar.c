#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i;
	char putti[] = "_putchar";

	for (i = 0, i <= 8, i++)
	{
		_putchar(putti[i]);
	}

	_putchar('\n');

	return (0);
}
