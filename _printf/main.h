#ifndef MAIN
#define MAIN
#include <stdarg.h>

int _printf(const char *format, ...);
int _countchar(char *c);
void _formatspec(char *c, const char **format, va_list args);
int _count_args(const char **format);
char int_to_char(int ***x);

#endif
