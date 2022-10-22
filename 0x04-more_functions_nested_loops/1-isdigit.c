#include "main.h"

/**
  * _isdigit - checks for digits
  * @c: the variable
  *
  * Return: 0 or 1
  */
int _isdigit(int c)
{
	if (c <= 9)
		return (1);
	else
		return (0);
}
