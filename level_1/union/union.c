#include <unistd.h>

void	ft_union(char *str1, char *str2)
{
	int	i = 0;
	int	ascii[255] = {0};

	while (str1[i])
	{
		if (ascii[(int)str1[i]] == 0)
		{
			ascii[(int)str1[i]] = 1;
			write(1, &str1[i], 1);
		}
		i++;
	}
	i = 0;
	while (str2[i])
        {
                if (ascii[(int)str2[i]] == 0)
                {
					ascii[(int)str2[i]] = 1;
                	write(1, &str2[i], 1);
                }
               	i++;
        }
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
}

