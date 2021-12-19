#include "../libft.h"

int my_strlen(const char *str)
{
	int len = 0;
	while(*str != '\0')
		len++;

	return len;
}
