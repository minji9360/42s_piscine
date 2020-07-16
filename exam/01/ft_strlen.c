#include <stdio.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		main(void)
{
	char c[10] = "sdfsfd";
	printf("%d", ft_strlen(c));
}

