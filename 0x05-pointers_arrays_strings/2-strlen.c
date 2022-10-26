#include "main.h"

/**
  *_strlen - know the length of char
  *
  *@s: character
  *
  *Return: length.
  */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
