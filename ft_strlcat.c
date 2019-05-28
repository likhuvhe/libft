/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 07:23:58 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/05/28 12:58:28 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int i;
	unsigned int length;

	length = ft_strlen(dst);
	i = 0;
	while (i < dstsize && dst[i] != '\0')
	{
		i++;
		dstsize++;
	}
	while (src[i] != '\0' && dstsize-- > 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize == 1)
		dst[i] = '\0';
	return (i + length);
}
/*int main()
{
 	char a[] = "Hello";
	char b[] = "The";
	 unsigned int r;

	r = ft_strlcat(a, b, 4);
	printf("%d", r);
	return (0);
}*/
