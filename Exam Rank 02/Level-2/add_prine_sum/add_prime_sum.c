#include <unistd.h>

int	mini_atoi(char *str)
{
	int n = 0, i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		n = (n * 10) + (str[i++] - '0');
	return (n);
}

void	ft_nbr(int n)
{
	if (n >= 10)
		ft_nbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int		isprime(int n)
{
	int i = 2;
	while (i < n)
	{
		if (n % i++ == 0)
			return(0);
	}
	return (1);
}

int		add_prime_sum(int n)
{
	int sum = 0, i = 2;
	while (i <= n)
	{
		if (isprime(i) == 1)
			sum += i;
		i++;
	}
	return(sum);
}

int	main(int ac, char **av)
{
	int n;
	if (ac == 2 && (n = mini_atoi(av[1])))
		ft_nbr(add_prime_sum(n));
	else
		ft_nbr(0);
	write(1, "\n", 1);
	return(0);
}
