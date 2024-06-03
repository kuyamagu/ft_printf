/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:13:38 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/06/03 21:10:13 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_char(unsigned char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_function_convert(const char *str, va_list args, int count_num, int i)
{
	int			count;

	count = 0;
	if (str[i] == 'c')
		count_num += ft_write_char(va_arg(args, int));
	if (str[i] == 's')
		count_num += ft_write_str(va_arg(args, char *));
	if (str[i] == 'p')
		count_num += ft_write_pointer(va_arg(args, unsigned long long));
	if (str[i] == 'd')
		count_num += ft_putnbr_count(va_arg(args, int), 1, &count);
	if (str[i] == 'i')
		count_num += ft_putnbr_count(va_arg(args, unsigned int), 1, &count);
	if (str[i] == 'u')
		count_num += ft_putnbr_unsigned(va_arg(args, int), 1, &count);
	if (str[i] == 'X')
		count_num += ft_putnbr_base(va_arg(args, unsigned int), UPPER_BASE,
				&count);
	if (str[i] == 'x')
		count_num += ft_putnbr_base(va_arg(args, unsigned int), LOWER_BASE,
				&count);
	if (str[i] == '%')
		count_num += ft_write_char('%');
	return (count_num);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count_num;
	int			i;

	count_num = 0;
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count_num = ft_function_convert(format, args, count_num, i);
		}
		else
		{
			write(1, &format[i], 1);
			count_num++;
		}
		i++;
	}
	va_end(args);
	return (count_num);
}
