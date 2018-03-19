/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalide <dgalide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:46:10 by dgalide           #+#    #+#             */
/*   Updated: 2018/03/19 15:02:49 by dgalide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char			**ft_tab_join(char **t1, char **t2, int b1, int b2)
{
	char		**output;
	size_t		i;
	size_t		j;

	if (!t1 || !t2)
		return (NULL);
	i = ft_strlen(*t1) - 1;
	output = (char **)malloc(sizeof(char *) * i + ft_strlen(*t2) + 2);
	j = 0;
	if (!output)
		return (NULL);
	output = ft_tab_cpy(t1, output);
	while (++i < ft_strlen(*t1) + ft_strlen(*t2))
		(output[i] = ft_strdup(t2[j++]));
	output[j] = NULL;
	if (b1)
		ft_tab_del(t1);
	if (b2)
		ft_tab_del(t2);
	return output;
}