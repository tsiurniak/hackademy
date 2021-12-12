#include "../include/test.h"


int my_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			if ((int) s1[i] > (int) s2[i])
			{
				return 1;
			} 
			else
			{
				return -1;	
			}

		}
		i++;
	}
	return 0;

}

