#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
mk_buffer binary_printf(mk_buffer buffer, va_list args);
mk_buffer rot13_printf(mk_buffer buffer, va_list args)

#endif
