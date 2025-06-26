#include <unistd.h>

void	rostring(char *str)
{
	int	i = 0;
	int	start = 0;
	int	end = 0;
	int	f = 0;  //0 si hay más palabras al recorrer el str, 1 si no o es solo 1 palabra el str//
	
	while (str[i] == 9 || str[i] == 32)
		i++;
	start = i;
		
	while (str[i] > 32)
		i++;
	end = i - 1;
		
	while (str[i] == 9 || str[i] == 32)
		i++;

	if (str[i] != 0)
	{
		f = 1;
	}

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	
	if (f)
	{
		write(1, " ", 1);
	}
	
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
