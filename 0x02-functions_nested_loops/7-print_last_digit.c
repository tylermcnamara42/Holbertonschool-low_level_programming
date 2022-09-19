#!/bin/bash

#include <stdio.h>

int print_last_digit(int x)
{
	int last_difit = x % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
