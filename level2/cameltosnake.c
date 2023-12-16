#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
//se receber 1 argumento
	if (argc == 2)
	{
    //enqnto estiver noo argumento recebido
		while(argv[1][i])
		{
      //se for uma letra maiuscula
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				argv[1][i] = argv[1][i] + 32;
				write (1, "_", 1);
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
