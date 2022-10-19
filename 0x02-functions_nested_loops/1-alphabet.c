#include "main.h"

/**
 * main - Print alphabets
 * Return: Always 0
 */
int main(void)
{
	int i;
	char print_alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(print_alphabet[i]);
	}
	return (0);
}
