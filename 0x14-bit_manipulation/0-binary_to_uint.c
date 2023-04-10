#include "main.h"

/**
 * power - computes base raised to the power of exp.
 * @base: the base integer.
 * @exp: the exponent integer.
 *
 * Return: the result of raising base to the power of exp.
 */
int power(int base, int exp)
{
        int i, num;

        num = 1;
        for (i = 0; i < exp; ++i)
                num *= base;

        return (num);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars.
 *
 * Return: the unsigned decimal value of the binary number, or 0 if b is NULL
 * or there are non-binary digits in the string.
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int sum;
        int length, i;

        sum = 0;
        if (b == NULL)
                return (sum);

        length = 0;
        while (b[length] != '\0')
                length++;

        for (i = length - 1; i >= 0; i--)
        {
                if (b[i] != '0' && b[i] != '1')
                        return (0);
                sum += (b[i] - '0') * power(2, length - i - 1);
        }

        return (sum);
}
