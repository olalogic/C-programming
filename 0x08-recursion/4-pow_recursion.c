/**
 * _pow_recursion - function that returns the value of x ^ y
 * @x: value to find exponent of
 * @y: exponent
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, --y));
}


