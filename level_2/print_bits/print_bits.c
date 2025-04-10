#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char   bit = 0;
    while (i--)
    {
        bit = (octet >> i & 1) + 48;
        write (1, &bit, 1);
    }
}

/*#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 7; (empezar en la posición 7 de 8 bits, osea, la posición más alta)

	while (i >= 0) 
	{
		if ((octet >> i) & 1) (si desplazamos octet a la derecha, y &1 osea extraemos el último dígito)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--; (para pasar al siguiente bit, de izquierda a derecha)
	}
}*/
