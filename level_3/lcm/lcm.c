unsigned int    lcm(unsigned int a, unsigned int b)
{
        int temp;
        int r = 0;

        if (a == 0 || b == 0)
                return (0);
        r = a * b;
        while (b != 0)
        {
                temp = b;
                b = a % b;
                a = temp;
        }
        return (r / a);
}

/*#include <stdio.h>

int     main(void)
{
        printf("%d\n", lcm(3, 5));
}*/
