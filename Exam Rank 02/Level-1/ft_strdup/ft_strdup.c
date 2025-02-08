#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i = 0;
	char *dest;

	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof (char) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
