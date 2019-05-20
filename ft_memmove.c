/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:18:53 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/05/20 13:06:54 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *from;
	char *to;

	from = (char*)src;
	to = (char*)dst;
	while (n > 0)
	{
		*to = *from;
		to++;
		from++;
		n--;
	}
	return (dst);
}
