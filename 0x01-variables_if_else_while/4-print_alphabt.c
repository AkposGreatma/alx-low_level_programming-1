#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char Great;

	for (Great = 'a'; Great <= 'z'; Great++)
	{
	if (Great != 'e' && Great != 'q')
	putchar(Great);
	}
	putchar('\n');

	return (0);
}
