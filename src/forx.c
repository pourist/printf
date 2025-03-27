/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forx.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppour-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:22:39 by ppour-ba          #+#    #+#             */
/*   Updated: 2023/06/04 18:57:47 by ppour-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	forx(unsigned int numb, char a)
{
	size_t	i;
	char	r;

	i = 0;
	if (numb >= 16)
	{
		i += forx(numb / 16, a);
		numb = (numb % 16);
	}
	if (numb < 10)
		r = numb + '0';
	else
		r = numb - 10 + a;
	write(1, &r, 1);
	return (i + 1);
}
