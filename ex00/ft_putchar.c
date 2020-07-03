#include <stdio.h>
#include <unistd.h>

void ft_putchar(char);

int main(void)
{
	char c;

	scanf("%s", c, sizeof(c));
	ft_putchar(c);
}

void ft_putchar(char)
{
	ssize_t write(1, &c, sizeof(c));
}
