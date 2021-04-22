/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:26:17 by adejbakh          #+#    #+#             */
/*   Updated: 2019/02/21 12:49:54 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	size_t	ft_size_int(int n)
{
	size_t a;

	a = 0;
	if (n < 0)
	{
		n = -n;
		a++;
	}
	while (n > 0)
	{
		n = n / 10;
		a++;
	}
	return (a);
}

static	char	*ft_int_to_char(char *str, int a, int n)
{
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
		a--;
	}
	if (n > 0)
	{
		str[a] = n % 10 + 48;
		ft_int_to_char(str, a - 1, n / 10);
	}
	return (str);
}

static char		*ft_int_min(char *s)
{
	char	*str;
	int		a;

	a = 0;
	if (!(str = (char*)malloc(sizeof(*str) * 11)))
		return (NULL);
	while (s[a])
	{
		str[a] = s[a];
		a++;
	}
	str[a] = s[a];
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		a;

	if (n == -2147483648)
		return (ft_int_min("-2147483648"));
	a = ft_size_int(n);
	if (!(str = (char*)malloc(sizeof(*str) * a + 2)))
		return (NULL);
	if (n < 0)
		str = ft_int_to_char(str, a, n);
	if (n > 0)
		str = ft_int_to_char(str, a - 1, n);
	if (n == 0)
		str[a++] = '0';
	str[a] = '\0';
	return (str);
}
