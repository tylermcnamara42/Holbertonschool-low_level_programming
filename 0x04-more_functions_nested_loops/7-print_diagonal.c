#include "main.h"

void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)

				putchar(' ');

			_putchar('\\');

			if (line == n -1)

				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

