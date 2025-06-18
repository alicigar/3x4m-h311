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
