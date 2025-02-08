unsigned char reverse_bits(unsigned char o)
{
	unsigned char r = 0;
	unsigned char i = 8;

	while (i--)
	{
		r = (r << 1) | (o & 1);
		o >>= 1;
	}
	return (r);
}
