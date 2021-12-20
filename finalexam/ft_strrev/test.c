#include <stdio.h>

char    *ft_strrev(char *str);

int	main(void)
{
	char src[100] = "heo";
	printf("%s\n", src);
	ft_strrev(src);
	printf("%s\n", src);
	return (0);
}
