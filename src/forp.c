/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppour-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:14:17 by ppour-ba          #+#    #+#             */
/*   Updated: 2023/06/04 20:58:29 by ppour-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	help(unsigned long long numb)
{
	size_t				i;
	char				r;

	if (numb == 0)
	{
		write(1, "(nil)", 5);
		return (3);
	}
	i = 0;
	if (numb >= 16)
	{
		i += help(numb / 16);
		numb = (numb % 16);
	}
	if (numb < 10)
		r = numb + '0';
	else
		r = numb - 10 + 'a';
	write(1, &r, 1);
	return (i + 1);
}

int	forp(void *ptr)
{
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	return (2 + help((unsigned long long) ptr));
}
