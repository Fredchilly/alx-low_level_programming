#include "main.h"

/**
 * factorial - return factorial of a given number.
 * @n: int type number
 * Return: factorial of number
*/

int factorial(int n)
{
    if (n < 0) {
        return -1; // error
    }
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
