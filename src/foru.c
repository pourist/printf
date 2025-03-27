/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   foru.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppour-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:09:28 by ppour-ba          #+#    #+#             */
/*   Updated: 2023/06/04 17:16:18 by ppour-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb)
{
	char	a;

	if (nb > 9)
	{
		ft_putunsigned(nb / 10);
		nb = nb % 10;
	}
	a = nb + 48;
	write(1, &a, 1);
}

int	foru(unsigned int a)
{
	size_t	i;

	i = 1;
	ft_putunsigned(a);
	if (a == 0)
		return (1);
	while (a >= 10)
	{
		a = a / 10;
		i++;
	}
	return (i);
}
