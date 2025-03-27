/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppour-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:02:44 by ppour-ba          #+#    #+#             */
/*   Updated: 2023/06/03 20:50:55 by ppour-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

int		right(int c, va_list a);
int		ft_printf(const char *str, ...);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		forc(int a);
int		fordi(int a);
int		foru(unsigned int a);
int		fors(char *string);
void	ft_putnbr(int nb);
int		forx(unsigned int numb, char a);
int		forp(void *ptr);

#endif
