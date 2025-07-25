#include <unistd.h>

void	wdmatch(const char *s1, const char *s2)
{
	int	i = 0;
	int	j = 0;
	
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i] == 0)
		write(1, s1 ,i);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
}
