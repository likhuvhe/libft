/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:38:48 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/05/28 11:30:15 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*comp1;
	unsigned char	*comp2;

	comp1 = (unsigned char*)s1;
	comp2 = (unsigned char*)s2;
	i = 0;
	while ((comp1[i] != '\0') && (comp2[i] != '\0'))
	{
		if (comp1[i] != comp2[i])
		{
			return (comp1[i] - comp2[i]);
		}
		i++;
	}
	if (comp1[i] == '\0' && comp2[i] != '\0')
		return (comp1[i] - comp2[i]);
	if (comp2[i] == '\0' && comp1[i] != '\0')
		return (comp1[i] - comp2[i]);
	return (0);
}
