#include <unistd.h>

void expand_str(char *c)
{
    int f;
    
    f = 1;
    while (*c == 32 || *c == 9)
        c++;
    while (*c)
    {
        if (*c == 32 || *c == 9)
        {
			if (f == 0)
			{
				write(1, "   ", 3);
            	f = 1;
        	}
			while (*c == 32 || *c == 9)
			c++;
    	}
		else
		{
			write(1, c, 1);
			c++;
			f = 0;
		}
	}
}

int main(int argc, char **argv)
{
    if (argc == 2)
        expand_str(argv[1]);
    write(1, "\n", 1);
    return (0);
}
