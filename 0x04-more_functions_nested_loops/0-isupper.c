#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _isupper - function that check for uppercase characters
 * @c: int type number
 * Return: 1 if uppercae, else 0
 */
int _isuper(int c)
{
	if (c > 64 && c< 91) 
		return (1);
	
	return (0);
}
