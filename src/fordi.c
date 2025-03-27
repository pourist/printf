/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fordi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppour-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:06:46 by ppour-ba          #+#    #+#             */
/*   Updated: 2023/06/03 22:09:07 by ppour-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	fordi(int a)
{
	size_t	i;

	i = 1;
	ft_putnbr(a);
	if (a == -2147483648)
		return (11);
	if (a == 0)
		return (1);
	if (a < 0)
	{
		i++;
		a = -a;
	}
	while (a >= 10)
	{
		a = a / 10;
		i++;
	}
	return (i);
}
