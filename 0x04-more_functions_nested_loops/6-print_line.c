#include "main.h"

void print_line(int x)
{
	int line;

	if (x > 0)
	{
		for (line = 0; line < x; line++)

			_putchar('_');
	}

	_putchar('\n');
}

