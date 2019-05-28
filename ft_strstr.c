/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:23:14 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/05/28 17:38:25 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(const char *haystack, const char *needle)
{
	char	*p_needle;
	char	*p_haystack;
	int		i;

	p_needle = (char*)needle;
	p_haystack = (char*)haystack;
	i = 0;
	while (p_needle[i])
	{
		while (p_needle[i] && p_haystack[i] && p_needle[i] == p_haystack[i])
		{
			i++;
		}
		if (!p_needle[i])
		{
			return (p_haystack);
		}
		p_needle = p_haystack + 1;
	}
	return (0);
}
