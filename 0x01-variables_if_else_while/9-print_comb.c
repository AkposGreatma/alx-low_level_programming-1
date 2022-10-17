#include <stdio.h>

/**
* main - Entry point of displaying numbers with commas
* Return: Always 0
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x);
	}
	if (x == 9)
	{
		break;
	}
	{
	else
	{
		putchar(',');
		putchar(' ');
	}
	return (0);
}
