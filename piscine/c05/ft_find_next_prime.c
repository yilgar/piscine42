int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	while (a < nb)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}