int prime_num(int i, int n);

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input number
 * Return: 1 if n is prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n - 1, n));
}

/**
 * prime_num - help fuction is_prime_number.
 * @n: number to be tested.
 * @i: number to test with.
 * Return: 1 if n is prime else 0
 */

int prime_num(int i, int n)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (n % i != 0)
		return (prime_num(i - 1, n));
	return (0);
}

