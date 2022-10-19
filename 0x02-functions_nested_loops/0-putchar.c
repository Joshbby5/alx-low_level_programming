#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main-program entry point.
 * Return:0 non error, no error
 */
 int main(void)
{
	char we[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
{
	putchar(we[x]);
}	putchar('\n');
	return (0);
}
