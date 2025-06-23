#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 0;
		while (argv[1][i] && is_space(argv[1][i]))
			++i;
		while (argv[1][i] && !is_space(argv[1][i]))
			++i;
		while (argv[1][i] && is_space(argv[1][i]))
                        ++i;
		while (argv[1][i])
		{
			while (argv[1][i] && is_space(argv[1][i]))
			{
				++i;
			}
			while (argv[1][i] && !is_space(argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				++i;
			}
			write(1, " ", 1);
		}
		i = 0;
		while (argv[1][i] && is_space(argv[1][i]))
			++i;
		while (argv[1][i] && !is_space(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			++i;
		}
	}
	write(1, "\n", 1);
}
