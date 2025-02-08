#include <unistd.h>

int main(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z' && (j == 0 || av[i][j - 1] == ' ' || av[i][j - 1] == '\t'))
				av[i][j] -= 32;
			else if (av[i][j] >= 'A' && av[i][j] <= 'Z' && j != 0 && av[i][j - 1] != ' ' && av[i][j - 1] != '\t')
				av[i][j] += 32;
			write(1, &av[i][j], 1);
		}
		write(1, "\n", 1);
	}
	if (ac < 2)
		write(1, "\n", 1);
	return (0);
}
