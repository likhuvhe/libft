#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *from;
	char *to;

	from = (char*)src;
	to = (char*)dest;
	while (n--)
	{
		if(*from == (char)c)
		{
			*(to++) = *(from++);
			return (to);
		}
		*(to++) = *(from++);
	}
	return (NULL);
}
