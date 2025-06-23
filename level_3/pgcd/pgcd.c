#include <unistd.h>
#include <stdlib.h>

void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void pgcd(char *s1, char *s2)
{
	int n1;
	int n2;
	int temp;

	n1 = atoi(s1);
	n2 = atoi(s2);

	while (n2 != 0)
	{
		temp = n2;
		n2 = n1 % n2;
		n1 = temp;
	}
	ft_putnbr(n1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(argv[1], argv[2]);
	write(1, "\n", 1);
}


/* segunda opción:

#include <stdlib.h>
#include <unistd.h>

int	pgcd(char *n1, char *n2)
{
	int	num1 = atoi(n1);
	int	num2 = atoi(n2);
	int	i = num1;

	while (i != 1)
	{
		if(num1 % i == 0 && num2 % i == 0)
			return (i);
		i--;
	}
	return (i);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		write (1, "\n", 1);
	else
		printf("%d\n", pgcd(argv[1], argv[2]));
	return (0);
}
*/
