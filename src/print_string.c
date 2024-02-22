/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 23:36:11 by makoch-l          #+#    #+#             */
/*   Updated: 2024/02/22 22:39:12 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	print_string(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str)
	{
		ft_putstr_fd((NULL), 1);
		return (6);
	}
	while (str[i])
		i++;
	ft_putstr_fd(str, 1);
	return (i);
}
