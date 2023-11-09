#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 'z';

	while (i != ('a' - 1))
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('a');
}