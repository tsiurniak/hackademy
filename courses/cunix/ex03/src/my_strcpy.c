#include "../include/test.h"


char *my_strcpy(char *dest, const char *src)
{
	char *address = dest;
	while((*dest++ = *src++) != '\0');
	return address;
}



