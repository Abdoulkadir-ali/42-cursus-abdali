int		ft_power(int nb, int power)
{
	if (power < 0)
		return (1 / ft_power(nb, -power - 1));
	if (power == 0)
		return (1);
	if (power > 0)
	    return (nb * ft_power(nb, power - 1));
}