#include "../libft.h"

char *ft_strstr(char *str, char *find)
{
	char *a, *b;

	b = find;

	if (*b == 0)
		return str;

	for (; *str != 0; str++)
	{
		if(*str != *b)
			continue;

		a = str;

		while (1)
		{
			if (*b == 0)
				return str;

			if (*a++ != *b++)
				break;
		}

		b = find;
	}

	return NULL;
}
