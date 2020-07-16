#include <unistd.h>

int		alpha_check(char c)
{
	int i;

	if (c >= 'a' && c <= 'z')
		i = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		i = c - 'A' + 1;
	else
		i = 1;
	return (i);
}

int		main(int argc, char **argv)
{
	int index;
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		index = alpha_check(argv[1][i]);
		while(index > 0)
		{
			write(1, &argv[1][i], 1);
			index--;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
