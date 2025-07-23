#include <unistd.h>

void	rostring(char *str)
{
	int	i = 0;
	int	start = 0;
	int	end = 0;
	int	space = 0;
	int	word = 0;

	while (str[i] == 9 || str[i] == 32)
		i++;
	start = i;

	while (str[i] > 32)
		i++;
	end = i - 1;

	while (str[i] == 9 || str[i] == 32)
		i++;
	while (str[i])
	{
		if (str[i] == 9 || str[i] == 32)
			space = 1;
		else
		{
			if (space == 1)
			{
				write(1, " ", 1);
				space = 0;
			}
			word = 1;
			write(1, &str[i], 1);
		}
		i++;
	}
	if (str[i] == 0 && word == 1)
		write (1, " ", 1);
	while (start <= end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int	main(int argc, char **argv)
{
	int	i = 1;
	if (argc > i)
		rostring(argv[1]);
	write(1, "\n", 1);	
}
