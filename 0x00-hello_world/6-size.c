#include <stdio.h>

/**
 * main - Prints the size of many var types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	Printf("Size of a char: %d byte(s)\n", sizeof(a));
	Printf("Size of an int: %d byte(s)\n", sizeof(b));
	Printf("Size of a long int: %d byte(s)\n", sizeof(c));
	Printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	Printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
