#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int nbr = atoi(av[1]);
		int first = 1;
		for (int i = 2; i <= nbr; i++)
			while (nbr % i == 0)
			{
				if (!first)
					printf("*");
				printf("%d", i);
				nbr /= i;
				first = 0;
			}
	}
	printf("\n");
	return 0;
}
