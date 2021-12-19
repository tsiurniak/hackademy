#include "../libft.h"

void *ft_memset(void *dest, int val, size_t len)
{
	unsigned char *ptr = dest;

	while(len-- > 0)
		*ptr = val;

	return dest;
}
