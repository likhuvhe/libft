#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
