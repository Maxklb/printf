/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:26:19 by makoch-l          #+#    #+#             */
/*   Updated: 2024/02/22 22:09:51 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int	ft_printf(const char *str, ...);
int	print_unsigned(unsigned int nb);
int	print_string(char *str);
int	print_int(int n);
int	print_char(char c);
int	print_hex(unsigned int value, int asc);
int	print_pointer(unsigned long value, int asc);

#endif