#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long	n = nbr;
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
		n = -(long)nbr;
	}
	else
		n = nbr;
	int	i = len - 1;
	while (n)
	{
		result[i] = n % 10 + '0';
		n = n / 10;
		i--;

	}
	return (result);
}

/*#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("%s\n", ft_itoa(INT_MAX));
}*/
