#include "../include/test.h"
#include <stdlib.h>


int counter(int n)
{
	int count = 1;
	int *countPtr;

	if (n < 0)
	{
		count++;
		n *= -1;
	}

	countPtr = &count;
	if (n != 0)
		return *countPtr += counter(n/10);
	return 0;
}

char* my_itoa(int nmb)
{
	int len = counter(nmb);
	char *result = (char *)malloc(sizeof(len));
	int i, sign;

	if ((sign = nmb) < 0)
		nmb = -nmb;
	i = 0;
	do
	{
		result[i++] = nmb % 10 + '0';
	} while ((nmb /= 10) > 0);
	if (sign < 0)
		result[i++] = '-';
	result[i] = '\0';
	
	int j;
	char c;

	i = 0;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		c = result[i];
		result[i] = result[j];
		result[j] = c;
	}

	return result;
	free(result);

}

