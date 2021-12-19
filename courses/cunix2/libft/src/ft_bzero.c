#include "../libft.h"

void ft_bzero(void *str, int len)
{
	if (str)
	{
		int i;
		for (i = 0; i < len; i++)
			((char*)str)[i] = 0;
	}
}
