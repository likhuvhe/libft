#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *p;

	p = (char*)s;
	while(n > 0)
	{
		*p = (char)c;
		p++;
		n--;
	}
	return(s);
}
