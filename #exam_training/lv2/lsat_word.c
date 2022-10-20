#include <unistd.h>

int ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	main(int ac, char *av[])
{
	char *tmp;
	int i;

	if (ac == 2)
	{	
		i = 0;
		while (1)
		{
			tmp = &av[1][i];
			while (ft_isspace(av[1][i]) == 0)
				i++;
			if (av[1][i] == '\0')
				break ;
			while (ft_isspace(av[1][i]) == 1)
				i++;
		}
		i = 0;
		while (tmp[i++] != '\0')
			write(1, &tmp, 1);
	}
	write(1, "\n", 1);
}

