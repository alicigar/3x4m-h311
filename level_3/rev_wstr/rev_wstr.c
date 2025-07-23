#include <unistd.h>

void	rev_wstr(char *str)
{
	int i = 0;
	int start = 0;
	int end = 0;
	
	while (str[i])
		i++;
	i--;
	while (str[i])
	{
		while (str[i] && (str[i] == 9 || str[i] == 32))
			i--;
		end = i;
		while (str[i] && str[i] != 9 && str[i] != 32)
			i--;
		i++;
		start = i;
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
		if (i > 0)
			write(1, " ", 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
}
