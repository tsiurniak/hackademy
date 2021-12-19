#include "../libft.h"

char *ft_memcpy(char *dest, const char  *src, int len)
{
	while (len-- > 0)
		*dest++ = *src;

	return dest;
}
