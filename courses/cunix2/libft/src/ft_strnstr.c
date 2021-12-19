#include "../libft.h"

char *ft_strnstr(const char *str, const char *find, int len)
{
	int i,j;

	if (find[0] == '\0')
		return ((char*)str);

	j = 0;
	while (j < len && str[j])
	{
		i = 0;
		while (j < len && find[i] && str[j] && find[i] == str[j])
		{
			++i;
			++j;
		}

		if (find[i] == '\0')
			return ((char*)&str[j-1]);

		j = j - i + 1;
	}

	return 0;
}
