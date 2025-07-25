#include <unistd.h>

void    ft_inter(char *str1, char *str2)
{
    unsigned char     ascii_str1[256] = {0}; // Para marcar caracteres vistos en s1
    unsigned char     ascii_str2[256] = {0}; // Para marcar caracteres vistos en s2
    int     i = 0;

    while (str2[i])
    {
        ascii_str2[(unsigned char)str2[i]] = 1;
        i++;
    }

    i = 0;
    while (str1[i])
    {
        if (ascii_str2[(unsigned char)str1[i]] == 1 && ascii_str1[(unsigned char)str1[i]] == 0)
        {
            write(1, &str1[i], 1);
            ascii_str1[(unsigned char)str1[i]] = 1;
        }
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 3)
        ft_inter(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
