/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppour-ba <ppour-ba@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:10:41 by ppour-ba          #+#    #+#             */
/*   Updated: 2023/02/14 19:26:19 by ppour-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}
