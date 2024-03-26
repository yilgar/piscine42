#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			while (*argv[i])
			{
				ft_putchar(*argv[i]);
				argv[i]++;
			}
			i++;
			ft_putchar('\n');
		}
	}
	return (0);
}
