#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int p = 0;
	if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				p = av[1][i] - 'A';
				while(p >= 0)
				{
					write(1, &av[1][i], 1);
					p--;
				}
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				p = av[1][i] - 'a';
				while(p >= 0)
				{
					write(1, &av[1][i], 1);
					p--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
