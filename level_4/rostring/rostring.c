#include <unistd.h>

void rostring(char *str)
{
    int i = 0;
    int start = 0;
    int end = 0;
    
    // 1. Saltar espacios iniciales
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    
    // 2. Guardar inicio y fin de la primera palabra
    start = i;
    while (str[i] && str[i] != ' ' && str[i] != '\t')
        i++;
    end = i;
    
    // 3. Saltar espacios después de la primera palabra
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    
    // 4. Imprimir el resto del string (sin espacios extra)
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            write(1, " ", 1); // Imprimir solo un espacio
            while (str[i] == ' ' || str[i] == '\t')
                i++;
        }
        else
        {
            write(1, &str[i], 1);
            i++;
        }
    }
    
    // 5. Imprimir espacio solo si hay más palabras (verificación implícita)
    if (start != end && str[end] != '\0')
        write(1, " ", 1);
    
    // 6. Imprimir la primera palabra al final
    while (start < end)
    {
        write(1, &str[start], 1);
        start++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rostring(argv[1]);
    write(1, "\n", 1);
    return (0);
}
