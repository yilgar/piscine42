#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*a;

	if (min >= max)
	{
		return (a = NULL);
	}
	range = max - min;
	a = (int *)malloc(range * sizeof(int) + 1);
	if (!a)
		return (0);
	i = 0;
	while (min < max)
	{
		a[i] = min ;
		min++;
		i++;
	}
	return (a);
}
