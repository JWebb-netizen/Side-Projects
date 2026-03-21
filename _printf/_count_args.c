#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _count_args(const char **c)
{
	int count = 0;

		
	for (count = 0; **c != '\0'; c++)
	{
		if (**c == '%' && **c + 1 == '%')
		{
			c++;
			count++;
		}
		else
		{
			;
		}
	}
	return (count);
}
