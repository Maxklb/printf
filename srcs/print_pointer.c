/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:48:05 by makoch-l          #+#    #+#             */
/*   Updated: 2024/02/22 14:33:42 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*create_hex(unsigned int value, int *len)
{
	int				i;
	unsigned long	buffer;
	char			*str;

	i = 0;
	buffer = value;
	while (buffer != 0)
	{
		buffer = buffer / 16;
		i++;
	}
	str = calloc(i + 1, sizeof(char));
	*len = i - 1;
	return (str);
}

int	print_pointer(unsigned long value, int asc)
{
		unsigned long	tempval;
	char			*printout;
	int				i;
	int				*iptr;

	iptr = &i;
	tempval = value;
	printout = create_string(value, iptr);
	if (!printout)
		return (0);
	while (tempval != 0 && i >= 0)
	{
		if ((tempval % 16) < 10)
			printout[i + 1] = (tempval % 16) + 48;
		else
			printout[i + 1] = (tempval % 16) + asc;
		tempval = tempval / 16;
		i--;
	}
	i = ft_strlen(printout);
	i = i + print_string("0x");
	ft_putstr_fd(printout, 1);
	free(printout);
	if (value == 0)
		i += print_char('0');
	return (i);
}
