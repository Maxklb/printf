#include "../include/ft_printf.h"

int	print_percent(void)
{
	write(1, "%", 1);
	return (1);
}