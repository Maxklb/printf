/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:40:33 by makoch-l          #+#    #+#             */
/*   Updated: 2024/02/23 15:47:14 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

static int	check_type(va_list args, const char input)
{
	int				i;
	unsigned long	value;
	int				asc;

	i = 0;
	if (input == 'c')
		i += print_char(va_arg(args, int));
	else if (input == 's')
		i += print_string(va_arg(args, char *));
	else if (input == 'p')
	{
		value = va_arg(args, unsigned long);
		asc = va_arg(args, int);
		i += print_pointer(value, asc);
	}
	else if (input == 'd' || input == 'i')
		i += print_int(va_arg(args, int));
	else if (input == 'u')
		i += print_unsigned(va_arg(args, unsigned int));
	else if (input == 'x')
		i += print_hex(va_arg(args, unsigned int), 87);
	else if (input == 'X')
		i += print_hex(va_arg(args, unsigned int), 55);
	else if (input == '%')
		i += print_percent();
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	int				i;
	int				print_len;

	i = 0;
	print_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += check_type(args, str[i + 1]);
			i++;
		}
		else
			print_len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}

int main()
{
	ft_printf("%s","j'aime les grosses");
	return (0);
}