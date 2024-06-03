/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 22:47:52 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/06/03 21:02:35 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define UPPER_BASE "0123456789ABCDEF"
# define LOWER_BASE "0123456789abcdef"

int	ft_printf(const char *format, ...);
int	ft_write_char(unsigned char c);
int	ft_write_str(char *str);
int	ft_putnbr_base(unsigned long long convert, const char *radix, int *count);
int	ft_write_pointer(unsigned long long pointer);
int	ft_putnbr_count(int n, int fd, int *count);
int	ft_function_convert(const char *str, va_list args, int count_num, int i);
int	ft_putnbr_unsigned(unsigned int n, int fd, int *count);

#endif
