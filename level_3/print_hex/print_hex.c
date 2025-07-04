#include <unistd.h>

void print_hex(int n)
{
    if (n > 15)
        print_hex(n / 16);
    write(1, &"0123456789abcdef"[n % 16], 1);
}

int ft_atoi(char *str)
{
    int n = 0;
    
    while (*str >= '0' && *str <= '9')
    {
        n = n * 10 + (*str - '0');
        str++;
    }
    return (n);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
}
