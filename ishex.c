/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ishex.c	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:22:20 by yba               #+#    #+#             */
/*   Updated: 2023/01/27 19:12:59 by yba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ispointer(t_print *tab)
{
	unsigned long	res;

	res = va_arg(tab->args, unsigned long);
	ft_putstr("0x");
	tab->len += 2;
	ft_putpnt(res, tab);
}

void	ishexmin(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, unsigned int);
	ft_puthexmin(res, tab);
}

void	ishexmaj(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, unsigned int);
	ft_puthexmaj(res, tab);
}
