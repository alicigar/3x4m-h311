int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d\n", is_power_of_2(1));
}*/

/* 
PSEUDOCÓDIGO.
-2^0 es 1, 2^1 es 2, 2^2 es 4, 2^3 es 8, 2^4 es 16, 2^5 es 32
-entonces, n son las potencias de dos (1, 2, 4, 8, 16, 32...) Vemos patrones? Sí. Vemos excepciones? También.
-0 nunca va a ser potencia, por eso, debemos de contemplar un caso especial para que nos retorne 0.
-Vamos a contemplar los números mayores que 1. Y como es que si pongo 1, me devuelve 1? porque while(n > 1) 
osea while (1 > 1) ES FALSO, por lo tanto, se sale del bucle y directamente retorna 1.
-Vale, y ahora los número que sí son potencia de dos: todos son múltiplos de 2, pero no todos los múltiplos de 2 son potencia de 2.
-Deben ser, números que puedas ir diviendo entre 2 hasta llegar a 0.
Por ejemplo: 12 es divisible entre 2, pero no es potencia de 2. 12/2 = 6. 6/2 = 3. Se queda en 3, no llega a dividirse hasta llegar a 1.
Por ejemplo: 16 es divisible entre 2. 16/2 = 8. 8/2 = 4. 4/2 = 2.  2/2 = 1. 1/1 = 0. SÍ es potencia de dos.
*/
