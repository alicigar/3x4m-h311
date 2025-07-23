unsigned int lcm(unsigned int a, unsigned int b) 
{
    if ((int)a < 0 || (int)b < 0)  // Detecta negativos convirtiendo a int
        return (0);
    if (a == 0 || b == 0)
        return (0);
	
	int temp;
        int r;
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
        printf("%d\n", lcm(-1, 2932));
}*/
