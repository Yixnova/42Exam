#include <stdlib.h>

char *ft_itoa(int nbr)
{
	int len = (nbr <= 0) ? 1 : 0, tmp = nbr;
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	char *cnum = (char *)malloc(len + 1);
	cnum[len] = '\0';
	if (nbr < 0)
		cnum[0] = '-';
	while (len-- > (nbr < 0))
	{
		cnum[len] = '0' + abs(nbr % 10);
		nbr /= 10;
	}
	return cnum;
}
