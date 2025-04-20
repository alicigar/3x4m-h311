#include <unistd.h>

void    rstr_capitalizer(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        if (str[i] >= 'a' && str[i] <= 'z' && str[i + 1] < 33)
            str[i] = str[i] - 32;
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc == 1)
        write (1, "\n", 1);
    else
    {
        while (i < argc)
        {
            rstr_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
}