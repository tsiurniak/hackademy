#include "../libft.h"

char *ft_strtrim(char const *s)
{
	int len = my_strlen(s);

	while (s[len-1] == ' ' || s[len-1] == '\t' || s[len-1] == '\n' )
		len--;

	int i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		len--;
		i++;
	}

	char *result = (char*)malloc(sizeof(char)*(len+1));

	for (int a = i + len, k = 0; i < a; i++, k++)
		result[k] = s[i];

	result[len] = '\0';

	return result;
}
