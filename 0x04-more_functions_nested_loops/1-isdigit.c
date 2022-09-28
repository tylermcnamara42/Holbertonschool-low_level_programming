#include "main.h"

/**
 * _isdigit - Checks for a digit (0-9).
 * @c: The number to be checked.
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);

	else
		return (0);
}

