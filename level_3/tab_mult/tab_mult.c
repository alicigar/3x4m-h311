#include <unistd.h>

int ft_atoi (char *str)
{
    int n = 0;
    while (*str >= '0' && *str <= '9')
    {
        n = n * 10 + (*str - '0');
        str++;
    }
    return (n);  
}

void ft_putnbr(int num)
{
    if (num > 9)
        ft_putnbr(num / 10);
    write(1, &"0123456789"[n % 10], 1);
}

void    tab_mult (char *str)
{
    int number;
    int i;
    int r;

    i = 1;
    number = ft_atoi(str);
    r = 0;
    while (i <= 9)
    {
        ft_putnbr(i);
        write(1, " x ", 3);
        ft_putnbr(number);
        write(1, " = ", 3);
        r = i * n;
        ft_putnbr(r);
        i++;
        write(1, "\n", 1);
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
        tab_mult(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}
