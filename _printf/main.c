#include "main.h"
#include <stdio.h>

int main(void)
{
	_printf("Hello, World\n");
	_printf("Good day to you sir!\n");
	_printf("This is a '%%' sign\n");
	_printf("0011 0101\n");
	_printf("n\n");
	_printf("%% %% %% %% ABCDEFG\n");
	_printf("12345 ABCDEFG hijklm !@#$%^&*()\n");
        _printf("%d\n", 8);
	_printf("This is: %d\n", 6);
	_printf("This is: %d\n", 12);
	_printf("This number: %d is the number of cats\n", 2);
	_printf("What about n1:%d and n2:%d?\n", 8, 5);
	_printf("Negative value: %d\n", -3);
	_printf("A zero value: %d\n", 0);
	return (0);
}
