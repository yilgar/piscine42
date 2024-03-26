#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc >= 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			j = 0;
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			i--;
			ft_putchar('\n');
		}
	}
	return (0);
}