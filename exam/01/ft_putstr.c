#include <unistd.h>

void ft_putstr(char *str);

int		main(int argc, char **argv)
{
	ft_putstr("123ddfd");
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}
