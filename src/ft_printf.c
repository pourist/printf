/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppour-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:24:22 by ppour-ba          #+#    #+#             */
/*   Updated: 2023/06/04 19:15:34 by ppour-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	right(int c, va_list a)
{
	if (c == 'c')
		return (forc(va_arg(a, int)));
	if (c == 'i' || c == 'd')
		return (fordi(va_arg(a, int)));
	if (c == 'u')
		return (foru(va_arg(a, unsigned int)));
	if (c == '%')
		ft_putchar('%');
	if (c == 's')
		return (fors(va_arg(a, char *)));
	if (c == 'x')
		return (forx(va_arg(a, unsigned int), 'a'));
	if (c == 'X')
		return (forx(va_arg(a, unsigned int), 'A'));
	if (c == 'p')
		return (forp(va_arg(a, void *)));
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;

	i = 0;
	if (str == NULL)
		return (-1);
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{	
			str++;
			i += right(*str, args);
			str++;
		}
		if (*str != '\0' && *str != '%')
		{
			ft_putchar(*str++);
			i++;
		}
	}
	va_end(args);
	return (i);
}
