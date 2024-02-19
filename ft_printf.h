/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:26:19 by makoch-l          #+#    #+#             */
/*   Updated: 2024/02/19 17:09:11 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINTF_H

# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	print_unsigned(unsigned int nb);
int	print_string(char *str);
int	print_int(int n);
int	print_char(char c);
int	print_hex(unsigned int value, int asc);

#endif