/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_cpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalide <dgalide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:46:10 by dgalide           #+#    #+#             */
/*   Updated: 2018/03/19 15:01:30 by dgalide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char			**ft_tab_cpy(char **src, char **dst)
{
	int			i;
	int			length;

	if (!src)
		return (NULL);
	i = -1;
	length = ft_strlen(*src);
	while (++i < length)
		dst[i] = ft_strdup(src[i]);
	dst[i] = NULL;
	return (dst);
}