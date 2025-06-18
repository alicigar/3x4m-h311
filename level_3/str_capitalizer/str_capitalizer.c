#include <unistd.h>

void	str_capitalizer(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i - 1] == 9 || str[i - 1] == 32 || str[i - 1] == '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i = 1;

	if (argc != 1)
	{
		while (argc > i)
		{
			str_capitalizer(argv[i]);
			i++;
			write(1, "\n", 1);
		}

	}
	else
		write(1, "\n", 1);
}
