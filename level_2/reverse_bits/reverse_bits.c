unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i = 8;
	unsigned char	r = 0;
	
	while (i--)
	{
		r = (r << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (r);
}
