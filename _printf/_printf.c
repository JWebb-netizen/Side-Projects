#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int i, count;
	char *helper;
	va_list args;
		
	i = count = 0;
	helper = (char *)malloc(1000 * sizeof(char));
	va_start(args, *format);
	for ( ; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			_formatspec(&helper[i], &format, args);
			i++;
		}
		else
		{
		helper[i] = *format;
		i++;
		}
	}
	count = _countchar(&helper[0]);
	write(0, helper, count);
	helper = 0;
	free(helper);
        va_end(args);
	return (0);
}
