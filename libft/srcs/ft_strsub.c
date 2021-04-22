/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:17:50 by adejbakh          #+#    #+#             */
/*   Updated: 2019/02/21 12:53:11 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*str;

	a = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(*str) * len + 1)))
		return (NULL);
	while (a < len)
	{
		str[a] = s[start];
		start++;
		a++;
	}
	str[a] = '\0';
	return (str);
}
