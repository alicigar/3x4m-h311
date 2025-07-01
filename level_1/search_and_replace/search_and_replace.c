#include <unistd.h>

void	search_and_replace(char *s, char *old_char, char *new_char)
{
	while (*s)
	{
		if (*s == *old_char)
			*s = *new_char;
		write(1, s, 1);
		s++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 4 && !argv[2][1] && !argv[3][1])
		search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
}
