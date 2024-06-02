/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 05:37:24 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/06/02 22:12:51 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_char(unsigned char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_write_str(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_base(unsigned long long convert, const char *radix, int *count)
{
	unsigned int	base;

	base = ft_strlen(radix);
	if (convert >= base)
		ft_putnbr_base(convert / base, radix, count);
	write(1, &radix[convert % base], 1);
	(*count)++;
	return (*count);
}

int	ft_write_pointer(unsigned long long pointer)
{
	int			count;
	const char	*lower_base;

	lower_base = "0123456789abcdef";
	count = 2;
	write(1, "0x", 2);
	return (ft_putnbr_base(pointer, lower_base, &count));
}

int	ft_putnbr_count(int n, int fd, int *count)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
		(*count)++;
	}
	if (n >= 10)
		ft_putnbr_count(n / 10, fd, count);
	ft_putchar_fd(n % 10 + '0', fd);
	(*count)++;
	return (*count);
}

int	ft_putnbr_unsigned(unsigned int n, int fd, int *count)
{
   if (n >= 10)
	   ft_putnbr_unsigned(n / 10, fd, count);
   ft_putchar_fd(n % 10 + '0', fd);
   (*count)++;
   return (*count);
}
