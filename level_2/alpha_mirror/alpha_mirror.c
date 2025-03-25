#include <unistd.h>

void    alpha_mirror(char *c)
{
    int i;

    i = 0;
    while (c[i])
    {
        if (c[i] >= 65 && c[i] <= 90)
        {
            c[i] = c[i] - 65;
            c[i] = 90 - c[i];
            write (1, &c[i], 1);
        }
        else if (c[i] >= 97 && c[i] <= 122)
        {
            c[i] = c[i] - 97;
            c[i] = 122 - c[i];
            write (1, &c[i], 1);
        }
        else
            write (1, &c[i], 1);
        i++;
    }
    write (1, "\n", 1);
}

int main (int argc, char **argv)
{
    if (argc != 2)
        write (1, "\n", 1);
    else
        alpha_mirror(argv[1]);
    return (0);
}