#include "libft.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		ri;
	int		swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		ft_swap(tab[i], tab[ri]);
		i++;
		ri--;
	}
}