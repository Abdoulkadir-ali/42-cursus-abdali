# include "libft.h"

void	ft_print_numbers(void)
{
	int i;

	i = '0';

	while (i != ('9' + 1))
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('10');
}
