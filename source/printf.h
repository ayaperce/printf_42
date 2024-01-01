/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 21:10:38 by ayaperce          #+#    #+#             */
/*   Updated: 2024/01/01 17:43:27 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int		ft_printf(const char *s, ...);
void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putnbr_base(\
		unsigned long long nbr, char *base, char c);
void	ft_putnbr_unsigned(unsigned int nb);