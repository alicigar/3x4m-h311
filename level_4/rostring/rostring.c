#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    int i = 0;
    int first_word_start = 0;
    int first_word_end = 0;
    int has_other_words = 0;

    // 1. Saltar espacios iniciales
    while (argv[1][i] && is_space(argv[1][i]))
        i++;

    // 2. Guardar inicio primera palabra
    first_word_start = i;

    // 3. Saltar primera palabra (caracteres no espacios)
    while (argv[1][i] && !is_space(argv[1][i]))
        i++;

    // 4. Guardar fin primera palabra
    first_word_end = i;

    // 5. Saltar espacios después de primera palabra
    while (argv[1][i] && is_space(argv[1][i]))
        i++;

    // 6. Verificar si hay más palabras después
    has_other_words = (argv[1][i] != '\0');

    // 7. Imprimir el resto del string (desde i hasta el final)
    while (argv[1][i])
    {
        // Solo imprimir un espacio si es el primer espacio después de una palabra
        if (is_space(argv[1][i]))
        {
            while (argv[1][i] && is_space(argv[1][i]))
                i++;
            if (argv[1][i])
                write(1, " ", 1);
        }
        else
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }

    // 8. Imprimir espacio solo si había otras palabras después
    if (has_other_words && first_word_start != first_word_end)
        write(1, " ", 1);

    // 9. Imprimir primera palabra al final
    while (first_word_start < first_word_end)
    {
        write(1, &argv[1][first_word_start], 1);
        first_word_start++;
    }

    write(1, "\n", 1);
    return (0);
}
