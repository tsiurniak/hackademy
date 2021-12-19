#include "../printf_test/header.h"
#include <stdarg.h>


char *my_strcpy(char *destination, const char *source)
{
	if ( NULL == destination)
		return NULL;

	char *ptr = destination;

	while (*source != '\0')
	{
		*destination = *source;
		destination++;
		source++;
	}

	*destination = '\0';

	return ptr;
}

int my_strlen(char *str)
{
	int len = 0;
	while(*str++ != '\0')
		len++;
	return len;
}


char *my_strrev(char *str)
{
	int i;
	int len = 0;
	char c;

	if (!str)
		return NULL;

	while (str[len] != '\0')
		len++;

	for ( i = 0; i < (len/2); i++)
	{
		c = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = c;
	}

	return str;
}

char *my_itoa(int i, char *str, int base)
{
	char *ptr = str;
	int digit, sign = 0;

	if (i < 0) 
	{
		sign = 1;
		i *= -1;
	}

	while (i)
	{
		digit = i % base;
		*ptr = (digit > 9) ? ('A' + digit - 10) : ('0' + digit);
		i = i / base;
		ptr++;
	}

	if (sign)
		*ptr = '-';

	*ptr = '\0';
	my_strrev(str);

	return str;
}

int ft_printf(const char* format, ...)
{
	va_list vl;
	int i = 0, j = 0;
	char buff[100] = {0}, tmp[20];
	char *str_arg;

	va_start(vl, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					buff[j] = (char)va_arg(vl, int);
					j++;
					break;

				case 'd':
					my_itoa(va_arg(vl, int), tmp, 10);
					my_strcpy(&buff[j], tmp);
					j += my_strlen(tmp);
					break;

				case 'x':
					my_itoa(va_arg(vl, int), tmp, 16);
					my_strcpy(&buff[j], tmp);
					j += my_strlen(tmp);
					break;

				case 'o':
					my_itoa(va_arg(vl, int), tmp, 8);
					my_strcpy(&buff[j], tmp);
					j += my_strlen(tmp);
					break;

				case 's':
					str_arg = va_arg(vl, char*);
					my_strcpy(&buff[j], str_arg);
					j += my_strlen(str_arg);
					break;
			}
		}
		else 
		{
			buff[j] = format[i];
			j++;	
		}
		i++;

	}

	write(1, buff, j);
	va_end(vl);
	return j;
}
