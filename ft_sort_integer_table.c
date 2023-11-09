#include "libft.h"

void	ft_sort_integer_table(int *tab, int size)
{
	int i;

	i = 0;

	while (i != size)
	{
		if (tab[i] > tab[i + 1] && i + 1 <= size)
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}