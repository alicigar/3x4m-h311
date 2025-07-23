#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int	n = nbr;
	int	len = 0;
	char * result;
	
	if (nbr <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		result[--len] = nbr % 10 + '0';
		nbr = nbr / 10;

	}
	return (result);
}

/*#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("%s\n", ft_itoa(INT_MAX));
}*/
