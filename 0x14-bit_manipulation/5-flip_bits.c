/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: start number
 * @m: target number
 * Return: bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int xor;

	xor = n ^ m;

	while (xor)
	{
		bits += xor & 1;
		xor >>= 1;
	}

	return (bits);
}

