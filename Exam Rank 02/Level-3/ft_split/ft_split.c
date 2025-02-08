#include <stdlib.h>
char    **ft_split(char *str)
{
	int i = 0, k = 0, j = 0;
	char **tab;
	tab=malloc(100000);
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i])
	{
		tab[j] = malloc(100000);
		while(str[i] && str[i] != ' ' && str[i] != '\t')
			tab[j][k++] = str[i++];
		tab[j][k] = '\0';
		k = 0;
		j++;
		while(str[i] == ' ' || str[i] == '\t')
			i++;
	}
	return(tab);
}
