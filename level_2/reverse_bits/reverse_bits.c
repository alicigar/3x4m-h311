unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i = 7;
	unsigned char	r;
	
	while (i >= 0)
	{
		r = (r << 1) | ((octet & i) & 1);
		i--;
	}
	return (r);
}
