#include "main.h"

/**
 *largest_number - returns the largest of 3 numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		int largest = a;
	}
	else if (b >= a && b >= c)
	{
		int largest = b;
	}
	else if (c >= a && c >= b)
	{
		int largest = c;
	}

	return (largest);
}
