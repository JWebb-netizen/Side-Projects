#include "main.h"
#include <stdio.h>

int _countchar(char *c)
{
	int count = 0;

		
	for (count = 0; *c != '\0'; c++)
	{
		count++;
	}
	return (count);
}
