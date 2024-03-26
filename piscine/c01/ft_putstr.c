#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}