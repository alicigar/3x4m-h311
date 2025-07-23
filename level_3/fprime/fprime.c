#include <stdio.h>
#include <stdlib.h>

void  fprime(int nb)
{
    int n = 2;
    if (nb < 1)
      return ;
    if (nb < 2)
        printf("%d", nb);
    else
    {
        while (nb > 1)
        {
            if (nb % n == 0)
            {
                printf("%d", n);
                nb = nb / n;
                if (nb > 1)
                      printf("*");
            }
            else
                  n++;
        }
    }
}

int  main(int argc, char **argv)
{
  if (argc == 2)
    fprime(atoi(argv[1]));
  printf("\n");
}
