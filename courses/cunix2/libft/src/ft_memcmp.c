#include "../libft.h"

int ft_memcmp(const void *s1, const void *s2, int len)
{
	if (len != 0)
	{
		const char *p1 = s1;
		const char *p2 = s2;

		do {
			if(*p1++ != *p2++)
				return (*--p1 - *--p2);
		} while (--len != 0);
	}
	return 0;
}
