#include <unistd.h>

int main(int ac, char *av[])
{
	int i = 0;

	if (argc == 2)
	{
		while(av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 'a' - 'A';

				
