#include <unistd.h>

int ft_strlen(char *s)
{
	int i = -1;
	while(s[++i]);
	return i;
}

int main(int ac, char**av) {
	if (ac == 2) {
		int i = ft_strlen(av[1]);
		while (av[1][--i])
			write(1, &av[1][i], 1);
	}
	write(1, "\n", 1);
	return 0;
}
