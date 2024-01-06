/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 21:10:38 by ayaperce          #+#    #+#             */
/*   Updated: 2024/01/03 04:06:19 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putstr(char *s, int *rtv);
void	ft_putchar(char c, int *rtv);
void	ft_putnbr(int nb, int *rtv);
void	ft_putnbr_base(unsigned long long nbr, char *base, char c, int *rtv);
void	ft_putnbr_unsigned(unsigned int nb, int *rtv);