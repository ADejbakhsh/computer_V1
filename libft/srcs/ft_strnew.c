/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:00:13 by adejbakh          #+#    #+#             */
/*   Updated: 2019/02/21 12:52:55 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	a;
	char	*str;

	a = 0;
	if (!(str = (char*)malloc(sizeof(*str) * size + 1)))
		return (NULL);
	while (a <= size)
		str[a++] = 0;
	return (str);
}
