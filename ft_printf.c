/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:13:38 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/26 08:27:40 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int ft_function_convert(const char *str, va_list args, int count_num, int i)
{
	const char	*upper_base;
	const char	*lower_base;
	int			count;

	count = 0;
	upper_base = "0123456789ABCDEF";
	lower_base = "0123456789abcdef";

	if (str[i] == 'c')
		count_num += ft_write_char(va_arg(args, char*));
	if (str[i] == 's')
		count_num += ft_write_str(va_arg(args, char*));
	if (str[i] == 'p')
		count_num += ft_write_pointer(va_arg(args, unsigned long long));	
	if (str[i] == 'd')
		count_num += ft_putnbr_count(va_arg(args, int), 1, &count);
	if (str[i] == 'i')
		count_num += ft_putnbr_count(va_arg(args, int), 1, &count);
	if (str[i] == 'u')
		count_num += ft_putnbr_count(va_arg(args, int), 1, &count);
	if (str[i] == 'X')
		count_num += ft_putnbr_base(va_arg(args, unsigned int), upper_base , &count);
	if (str[i] == 'x')
		count_num += ft_putnbr_base(va_arg(args, unsigned int), lower_base , &count);
	return (count_num);
}

int	ft_printf(const char *format, ...)
{
	char *str;
	va_list	args;
	int	count_num;
	int	i;

	count_num = 0;
	str = ft_strdup(format);
	if (!str)
		return (0);
	va_start(args, format);

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{	
			i++;
			count_num = ft_function_convert(str, args, count_num, i);
			i++;
		}
			
		write (1, &str[i], 1);
		count_num++;
		i++;
	}
	va_end(args);
	free(str);
	return (count_num);
}