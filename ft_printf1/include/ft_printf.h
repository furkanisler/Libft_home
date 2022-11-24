/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 03:10:58 by misler            #+#    #+#             */
/*   Updated: 2022/11/23 07:49:06 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../Libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_input_parser(const char *str, va_list args);
int	ft_formats(int c, va_list args);
int	ft_char_format(char c);
int	ft_string_format(char *str);
int	ft_pointer_format(void *ptr_addr);
int	ft_decimal_format(int value);
int	ft_unsigned_decimal_format(unsigned int value);
int	ft_hexadecimal_format(unsigned int value);
int	ft_upper_case_hexadecimal_format(unsigned int value);
int	ft_percent_format(char c);
int	ft_is_argument(int c);

#endif