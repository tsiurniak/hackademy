#include "../include/test.h"


int my_atoi(const char *nptr)
{
	int isMinus = 0, result = 0;

	if (('0'>*nptr || *nptr>'9') && (*nptr == '+' || *nptr == '-'))
	{
		if (*nptr == '-')
			isMinus = 1;
		nptr++;
	}

	while (*nptr != '\0')
	{
		if (*nptr < '0' || '9' < *nptr)
			break;
		else
			result = result * 10 + (*nptr++ - '0');
	}

	return isMinus ? -result : result;


}
