#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char bit = 0;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

/*int	main(void)
{
	print_bits(3);
}*/
