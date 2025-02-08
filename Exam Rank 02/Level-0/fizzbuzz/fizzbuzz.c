#include <unistd.h>

void nbr(int number)
{
	char str[10] = "0123456789";

	if (number > 9)
		nbr(number / 10);
	write(1, &str[number % 10], 1);
}

int	main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			write(1, "fizz",5);
		}
		else if(i % 5 == 0)
		{
			write(1, "buzz",5);
		}
		else if(i % 3 == 0 && (i % 5 == 0))
		{
			write(1, "fizzbuzz", 9);
		}
		else
			nbr(i);
		write(1, "\n", 1);
		i++;
	}
}
