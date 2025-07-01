char	*ft_strrev(char *str)
{
	int	len = 0;
	int	i = 0;
	char	tmp;

	while (str[len])
		len++;
	len--;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	char s[] = "papafrita";
	printf("%s\n", ft_strrev(s));
}*/
