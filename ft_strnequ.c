/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:31:34 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/05/30 17:46:13 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  ft_strnequ(char const *s1, char const *s2,size_t n)
{
	if (!s1 || !s2)
		return (0);
	while ((*(s1++) != *(s2++)) && n-- > 0)
	{
		return (0);
	}
	while (ft_strlen(s1) != ft_strlen(s2))
	{
		return (0);
	}
	return (1);
}
