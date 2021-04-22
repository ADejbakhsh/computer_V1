/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:15:33 by adejbakh          #+#    #+#             */
/*   Updated: 2018/11/23 16:19:55 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *src)
{
	char	*str;
	int		a;

	a = ft_strlen(src);
	if (!(str = (char*)malloc(sizeof(*str) * (a + 1))))
		return (NULL);
	a = 0;
	while (src[a] != '\0')
	{
		str[a] = src[a];
		a++;
	}
	str[a] = src[a];
	return (str);
}
