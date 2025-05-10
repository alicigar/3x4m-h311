#include <unistd.h>

void    camel_to_snake(char *s)
{
    int    i;

    i = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            write (1, "_", 1);
            s[i] = s[i] + 32;
        }
        write (1, &s[i], 1);
        i++;        
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
        camel_to_snake(argv[1]);
    write (1, "\n", 1);
    return (0);
}
