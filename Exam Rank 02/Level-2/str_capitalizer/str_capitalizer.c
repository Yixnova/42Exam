#include <unistd.h>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int j = 1; j < ac; j++)
		{
			for (int i = 0; av[j][i]; i++) {
				if (av[j][i] >= 'A' && av[j][i] <= 'Z')
					av[j][i] += 32;
				if ((av[j][i] >= 'a' && av[j][i] <= 'z') && (i == 0 || av[j][i - 1] == ' ' || av[j][i - 1] == '\t'))
					av[j][i] -= 32;
				write(1, &av[j][i], 1);
			}
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
