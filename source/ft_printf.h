/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:17:50 by ayaperce          #+#    #+#             */
/*   Updated: 2024/02/16 08:32:15 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putstr(char *s, int *rtv);
void	ft_putchar(char c, int *rtv);
void	ft_putnbr(int nb, int *rtv);
void	ft_putnbr_base(unsigned long long nbr, char *base, char c, int *rtv);
void	ft_putnbr_unsigned(unsigned int nb, int *rtv);

#endif
