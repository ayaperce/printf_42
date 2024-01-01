/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 21:10:45 by ayaperce          #+#    #+#             */
/*   Updated: 2024/01/01 18:43:38 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "printf.h"

int	check_flag(char c, va_list args)
{
	if (c == 'c')
		ft_putchar((char)va_arg(args, int));
	else if (c == 's')
		ft_putstr((char *)va_arg(args, char *));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	i;
	char	*str;

	str = ft_strdup(s);
	va_start(args, s);
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i]);
		else
		{
			check_flag(str[i + 1], args);
			i++;
		}
        i++;
	}
	free(str);
	va_end(args);
	return (i);
}
