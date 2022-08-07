#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char * const format, ...);
int _printchar(va_list args);
int _printstring(va_list args);
int _printint(va_list args);
int (*_select_func(char c))(va_list);

#endif /* MAIN_H */
