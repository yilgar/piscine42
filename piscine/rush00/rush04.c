#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, int left, int middle, int right)
{
	int	count;

	count = 1;
	if (x > 0)
	{
		ft_putchar(left);
	}
	while (count < (x - 1))
	{
		ft_putchar(middle);
		count++;
	}
	if (x > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	count;

	count = 1;
	if (x > 0 && y > 0)
	{
		print_line(x, 'A', 'B', 'C');
	}
	while (count < y - 1 && x > 0)
	{
		print_line(x, 'B', ' ', 'B');
		count++;
	}
	if (y > 1 && x > 0)
	{
		print_line(x, 'C', 'B', 'A');
	}
}