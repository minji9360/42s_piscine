#include <unistd.h>

int		main(void)
{
	int num;

	num = '9';
	while (num >= '0')
	{
		write(1, &num, 1);
		num--;
	}
	return (0);
}
