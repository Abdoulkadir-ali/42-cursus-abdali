int		ft_factorial(int nb)
{
	if (nb < 1)
		return (0);
	else if (nb == 1)
		return (1);
	else
		return (nb * ft_factorial(nb - 1));
}