/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_to_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 17:41:27 by adejbakh          #+#    #+#             */
/*   Updated: 2019/02/24 16:59:39 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_n_avg(char **n_avg)
{
	int	a;

	if (!n_avg)
		return (NULL);
	a = 0;
	while (n_avg[a])
	{
		free(n_avg[a]);
		++a;
	}
	free(n_avg);
	n_avg = NULL;
	return (NULL);
}

char		**argv_to_tab(int argc, char **argv, int skip)
{
	char	**n_avg;
	int		size;
	int		i;

	i = 0;
	if ((size = (argc - skip)) < 1)
		return (NULL);
	if (!(n_avg = (char**)malloc(sizeof(*n_avg) * size + 1)))
		return (NULL);
	while (argv[skip])
	{
		n_avg[i] = (char*)malloc(sizeof(**n_avg) * ft_strlen(argv[skip]) + 1);
		if (!(n_avg[i]))
			return (free_n_avg(n_avg));
		n_avg[i] = ft_strcpy(n_avg[i], argv[skip]);
		++skip;
		++i;
	}
	n_avg[i] = 0;
	return (n_avg);
}
