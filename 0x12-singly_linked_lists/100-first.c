#include <stdio.h>
#include <stdlib>
#include "lsit.h"
void __attribute__((constructor)) print_lines(void);

/**
 * print_lines - Prints a sentence before the
 * main function is executed.
 */
void print_lines(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
