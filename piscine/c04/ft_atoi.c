int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	last;

	neg = 1;
	i = 0;
	last = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		last = last * 10 + str[i] - 48;
		i++;
	}
	return (neg * last);
}