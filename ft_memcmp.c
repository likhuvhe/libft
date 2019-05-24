/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:01:42 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/05/24 13:56:51 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ift_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*cmp1;
	char			*cmp2;
	unsigned int	i;

	i = 0;
	cmp1 = (char*)s1;
	cmp2 = (char*)s2;
	while (n > i)
	{
		if (cmp1[i] != cmp2[i])
		{
			return (cmp1[i] - cmp2[i]);
		}
		i++;
	}
	return (0);
}
