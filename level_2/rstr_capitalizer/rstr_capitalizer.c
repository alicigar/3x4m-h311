#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == 9 || str[i + 1] == 32 || str[i + 1] == 0))
            		str[i] = str[i] - 32;
            	write (1, &str[i], 1);
            	i++;
	}
}

int	main(int argc, char **argv)
{
	int	i = 1;
	
	if (argc == 1)
		write(1, "\n", 1);
	while (i < argc)
	{
		rstr_capitalizer(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
