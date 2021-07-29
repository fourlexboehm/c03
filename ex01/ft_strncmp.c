int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "1099";
	char	s2[] = "1551";
	printf("%d", ft_strncmp(s1, s2, 4)); 
}
*/
