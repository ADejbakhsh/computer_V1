/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_contain_only.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccommiss <ccommiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 09:48:00 by adejbakh          #+#    #+#             */
/*   Updated: 2019/02/21 18:31:55 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_contain_only(char *str, char *s2)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (str[a])
	{
		b = 0;
		c = 0;
		while (s2[b])
			if (s2[b++] == str[a])
				c = 1;
		if (!(c == 1))
			return (0);
		a++;
	}
	return (1);
}
