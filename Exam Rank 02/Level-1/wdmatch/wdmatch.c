#include <unistd.h>

void ft_putstr(char *s)
{
	int i = -1;
	while (s[++i])
		write(1, &s[i], 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = -1;
		int j = 0;
		while (av[2][j])
		{
			if (av[2][j++] == av[1][i])
				i++;
		}
		if (!av[1][i])
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}
