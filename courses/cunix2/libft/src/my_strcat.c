#include "../libft.h"

char *my_strcat(char* dest, const char *append)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; append[j] != '\0'; j++)
		dest[i+j] = append[j];
	dest[i+j] = '\0';

	return dest;
}
