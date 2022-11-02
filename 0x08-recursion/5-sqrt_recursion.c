int sqrt_odd(int s, int n);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: the sqrt of n
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);
	else if (n <= 1 && n >= 0)
		return (n);

	if (!(n % 2))
	{
		if (n / 2 == 2 || n == 2)
			return (2);
		sqrt = _sqrt_recursion(n / 2);
		if (n / sqrt == sqrt)
			return (sqrt);
		else if (sqrt > 1)
			return (sqrt * 2);
		return (-1);
	}
	else
	{
		return (sqrt_odd(n, n - 2));
	}
}

/**
 * sqrt_odd - handles odd numbers
 * @s: odd number to start from
 * @n: input number
 * Return: sqrt of n
 */

int sqrt_odd(int s, int n)
{
	if (n < 0)
		return (-1);
	else if (s == n * n)
		return (n);
	else
		return (sqrt_odd(s, n - 2));
}

