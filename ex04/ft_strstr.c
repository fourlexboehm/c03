/* A function that compares two strings and outputs true if they're identical
 * and false if they're different.
 */
int	compare(char *X, char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}
/* Finds to_find in str and returns str from that point till it's end */

char	*ft_strstr(char	*str, char *to_find)
{
	while (*str != '\0')
	{
		if ((*str == *to_find) && compare(str, to_find))
		{
			return (str);
		}
		str++;
	}
	return ("\0");
}
/*
#include <stdio.h>
int    main(void)
{
    char    str[] = "there is a needle in this haystack";
    char    to_find[] = "needle";

    printf("%s\n", ft_strstr(str, to_find));
	printf("%d\n", compare("were the same", "were not same"));

	printf("%d\n", compare("were the same", "were the same"));
    return (0);
}
*/
