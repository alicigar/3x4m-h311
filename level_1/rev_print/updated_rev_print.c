#include <unistd.h>

char  *rev_print(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	i--;
  	while(i > 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}

/*int main(void)
 {
	 rev_print("rainbow dash");
	 write(1, "\n", 1);
	 rev_print("Ponies are awesome");
	 write(1, "\n", 1); 
	 rev_print("");
	 write(1, "\n", 1);
	 return (0);
}*/

//demostrado científicamente, que hace unas semanas este ejercicio ya no es char  *rev_print(char *str), es char  *rev_print(char *str)
//se puede realizar haciendo tal cual ft_strrev del segundo nivel porque piden lo mismo, o de esta forma más corta, ya que te deja usar la función "write" y en el otro no.
//el main con tal cual esos ejemplos te los dan en el subject para que tú compruebes, pero no se entrega ya que te pide una FUNCIÓN.
