#include "../libft.h"

char *ft_strchr(const char *str, int ch)
{
	do {
		if (*str == ch)
			return (char*)str;
		if (*str == '\0')
			return (NULL);
	}	while (*str++);
	return (NULL);
}
