char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	desti;
	unsigned int	srci;

	desti = 0;
	srci = 0;
	while (dest[desti] != '\0')
		desti++;
	while (src[srci] != '\0' && srci <= nb)
	{
		dest[desti] = src[srci];
		srci++;
		desti++;
	}
	dest[desti] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "I'm the SOurce";
	char	dest[80] = "Please Add to me";

	printf("%s", ft_strncat(dest, src, 10));
}
*/
