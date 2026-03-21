#include "main.h"
#include <stdarg.h>

void _formatspec(char *c, const char **format, va_list args)
{
	int ival = 0;
	int a[20] = {0};
	int i = 0;

	switch(**format){
	case '%':
		*c = '%';
		break;
	case 'd':
		ival = va_arg(args, int);
		if (ival == 0)
		{
			*c = '0';
			c++;
		}
		else if (ival < 0)
		{
			ival = (ival * (-1));
			*c = '-';
			c++;
		}
		else
		{
			;
		}
		while (ival != 0)
			{
		a[i] = (ival % 10);
		ival = ival / 10;
		i++;
		}
			i--;
		for( ; i >= 0; i--)
		{
			*c = a[i] +'0';
			c++;
		}
		break;
	default:
		*c = **format;
	}
	return;
}
