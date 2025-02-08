#include <unistd.h>

void ft_putnbr(int n)
{
	char c;
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int res = 0;
	while (*str >= '0' && *str <= '9')
		res = res * 10 + (*str++ - '0');
	return res;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = ft_atoi(argv[1]);
		for (int i = 1; i <= 9; i++)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
		}
	}
	else
	{
		write(1, "\n", 1);
	}
	return 0;
}
