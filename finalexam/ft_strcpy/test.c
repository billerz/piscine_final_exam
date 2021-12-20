#include <stdio.h>
#include <unistd.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2);

int	main(void)
{
	char src[22] = "hello";
	char dest[22];

	strcpy(dest, src);
	printf("%s %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("%s %s\n", src, dest);
	return (0);

}
