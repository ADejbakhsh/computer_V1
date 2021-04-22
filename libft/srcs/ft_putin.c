/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 14:31:52 by adejbakh          #+#    #+#             */
/*   Updated: 2019/02/21 12:55:43 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putin(int fmt, ...)
{
	int		i;
	va_list	ap;
	char	*s;

	i = fmt;
	va_start(ap, fmt);
	while (i-- > 0)
	{
		s = va_arg(ap, char *);
		ft_putstr(s);
	}
	va_end(ap);
}
