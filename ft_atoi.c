int	ft_atoi(char *str)
{
	int	r;
	int	s;

	r = 0;
	s = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - '0';
		str++;
	}
	return (r * s);
}
