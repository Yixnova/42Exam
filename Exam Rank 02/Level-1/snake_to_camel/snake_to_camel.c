#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (!*av[1])
			return write(1, "\n", 1);
		int i = -1;
		while (av[1][++i]) {
			if (av[1][i] == '_')
			{
				i++;
				av[1][i] = av[1][i] - 32;
			}
			write(1, &av[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}
