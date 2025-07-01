#include <stdio.h>
#include <stdlib.h>

void    pgcd(int a,  int b)
{
        int     temp;

        while (b != 0)
        {
                temp = b;
                b = a % b;
                a = temp;
        }
        printf("%d", a);
}

int     main(int argc, char **argv)
{
        if (argc == 3)
                pgcd(atoi(argv[1]), atoi(argv[2]));
        printf("\n");
}
