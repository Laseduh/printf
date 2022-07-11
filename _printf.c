#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
int printed_chars;
conver_t f_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{NULL, NULL}
};

va_list arg_list;
int num_ch = 0;

va_start(valist, format);
num_ch = get_print(format, valist, pt_format);
va_end(valist);
return (num_ch);
}
