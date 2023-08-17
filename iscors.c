/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iscors.c	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:46:30 by yba               #+#    #+#             */
/*   Updated: 2023/01/22 14:26:13 by yba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ischar(t_print *tab)
{
	char	res;

	res = va_arg(tab->args, unsigned int);
	tab->len += 1;
	ft_putchar(res);
}

void	isstring(t_print *tab)
{
	char	*res;
	int		i;

	res = va_arg(tab->args, char *);
	if (res == NULL)
	{
		ft_putstr("(null)");
		tab->len += 6;
		return ;
	}
	i = 0;
	while (res[i])
	{
		ft_putchar(res[i]);
		tab->len++;
		i++;
	}
}
