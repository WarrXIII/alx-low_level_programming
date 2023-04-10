#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum;
	unsigned long int xor;
	int i;

	sum = 0;
	xor = n ^ m;
	for (i = 0; i < 64; i++)
	{
		if ((xor >> i) & 1)
			sum++;
	}
	return (sum);
}
