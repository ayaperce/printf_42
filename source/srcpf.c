/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcpf.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 21:10:30 by ayaperce          #+#    #+#             */
/*   Updated: 2024/01/03 04:02:25 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str, int *rtv)
{
	if (!str)
		*rtv += write(1, "(null)", 6);
	else
		*rtv += write(1, str, ft_strlen(str));
}

void	ft_putchar(char c, int *rtv)
{
	write(1, &c, 1);
	(*rtv)++;
}

void	ft_putnbr(int nb, int *rtv)
{
	if (nb < 0)
	{
		if (nb == INT_MIN)
		{
			write(1, "-2147483648", 11);
			*rtv += 11;
			return ;
		}
		nb = -nb;
		ft_putchar('-', rtv);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, rtv);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48, rtv);
}


void	ft_putnbr_base(unsigned long long nbr, char *base, char c, int *rtv)
{
	if (c == 'p')
	{
		if (nbr != 0)
			ft_putstr("0x", rtv);
		else if (nbr == 0)
		{
			ft_putstr("(nil)", rtv);
			return ;
		}
		c++;
	}
	if (c != 'p')
	{
		if (nbr >= 16)
			ft_putnbr_base(nbr / 16, base, c, rtv);
		ft_putchar(base[nbr % 16], rtv);
	}
}

void	ft_putnbr_unsigned(unsigned int nb, int *rtv)
{
	if (nb >= 10)
	{
		ft_putnbr_unsigned(nb / 10, rtv);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48, rtv);
}
