
#include <unistd.h>

void	expand_str(char *s)
{
	int	i;
	int	f;
	
	i = 0;
	f = 1;
	while (s[i] < 33)
		i++;
	while (s[i])
	{
		if (s[i] > 32)
		{
			if (f == 0)
			{
				write (1, "   ", 3);
				f = 1;
			}
			write (1, &s[i], 1);
		}
		else if (s[i] < 33)
			f = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write (1, "\n", 1);
	return (0);
}