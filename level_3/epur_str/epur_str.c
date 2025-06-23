#include <unistd.h>

void	epur_str(char *str)
{
	int	f = 0;
	int	i = 0;
	while (str[i] == 32 || str[i] == 9)
		i++;
	while (str[i])
	{
		if (str[i] == 32 || str[i] == 9)
			f = 1;
		else
		{
			if (f == 1)
			{
				write(1, " ", 1);
				f = 0;
			}
			write(1, &str[i], 1);
		}
	i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
}
