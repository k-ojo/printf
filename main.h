#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int print_dec(int n);
int print_format(char c, va_list ap, unsigned int *i);
int _putchar(char c);
int _printf(const char *format, ...);
int print_int(int n);
int _pow(int base, int index);
int print_string(char *str);
void put_special(char c);
int print_37(void);

#endif
