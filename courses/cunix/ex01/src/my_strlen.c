#include "../include/test.h"
#include <string.h>


unsigned int my_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return i;
}
