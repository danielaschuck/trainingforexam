#include <unistd.h>
//buscar um caractere específico (c) em uma string (str)
int	iter(char *str, char c, int len)
{
	int	i = 0;

	while (str[i] && (i < len || len == -1))
		if (str[i++] == c)
			return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
//se receber dois argumentos
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
      //se o caractere da primeira string na posição i NÃO ocorreu antes da posição i no argv[1] &&  se o caractere da primeira string na posição i está presente na(argv[2])
			if (!iter(argv[1], argv[1][i], i) && iter(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
