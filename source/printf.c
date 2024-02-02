/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 21:10:45 by ayaperce          #+#    #+#             */
/*   Updated: 2024/02/02 17:32:46 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "printf.h"

int	check_flag(char c, va_list args, int *rtv)
{
	if (c == 'c')
		ft_putchar((char)va_arg(args, int), rtv);
	else if (c == 's')
		ft_putstr((char *)va_arg(args, char *), rtv);
	else if (c == 'i' || c == 'd')
		ft_putnbr((int)va_arg(args, int), rtv);
	else if (c == '%')
		ft_putchar('%', rtv);
	else if (c == 'u')
		ft_putnbr_unsigned((unsigned int)va_arg(args, unsigned int), rtv);
	else if (c == 'x')
		ft_putnbr_base((unsigned int)va_arg(args, unsigned int),
			"0123456789abcdef", c, rtv);
	else if (c == 'X')
		ft_putnbr_base((unsigned int)va_arg(args, unsigned int),
			"0123456789ABCDEF", c, rtv);
	else if (c == 'p')
		ft_putnbr_base((unsigned long long)va_arg(args, unsigned long long),
			"0123456789abcdef", c, rtv);
	return (1);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	i;
	char	*str;
	int		rtv;

	str = ft_strdup(s);
	rtv = 0;
	va_start(args, s);
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i], &rtv);
		else
		{
			check_flag(str[i + 1], args, &rtv);
			i++;
		}
		i++;
	}
	free(str);
	va_end(args);
	return (i);
}
