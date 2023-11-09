#include "libft.h"

void	ft_rev_int_tab(int *tab, size_t size)
{
	size_t	i;
	size_t	ri;
	size_t	swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		ft_swap(tab[i], tab[ri]);
		i++;
		ri--;
	}
}