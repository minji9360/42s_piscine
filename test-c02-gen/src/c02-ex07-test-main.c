#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

// hello world!!
int main()
{
	
	char c[20];

	printf("%s\n", ft_strcpy(c, "12345678912345678900"));
	printf("%s\n", ft_strcpy(c, "ujuj"));
	printf("%s\n", ft_strcpy(c, "1234"));
}
