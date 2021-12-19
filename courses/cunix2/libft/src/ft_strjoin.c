#include "../libft.h"

char *ft_strjoin(const char *str1, const char *str2)
{
	char *result = (char*)malloc(my_strlen(str1) + my_strlen(str2) + 1);

	if (result)
	{
		my_strcpy(result, str1);
		my_strcat(result, str2);
	}

	return result;
}
