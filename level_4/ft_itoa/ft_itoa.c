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
	  int	i = len - 1;
	  while (nbr)
	  {
		  result[i] = nbr % 10 + '0';
		  nbr = nbr / 10;
		  i--;
	  }
	  return (result);
  }

/*#include <stdio.h>

int	main(void)
{
	int	n = -21;
	printf("%s\n", ft_itoa(n));
}*/
