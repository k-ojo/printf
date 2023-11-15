#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct format
{
	char *id;
	int (*func)();
} func_ptr;

int print_address(va_list ap);
int print_out(unsigned char *ptr, const int n, int i);
int print_HEX(va_list ap);
int print_bin(va_list ap);
int print_others(char c, va_list ap, unsigned int *j);
int print_dec(int n);
int print_hex(va_list ap);
int print_oct(va_list ap);
int print_unsigned(va_list ap);
int print_format(char c, va_list ap, unsigned int *i);
int _putchar(char c);
int _printf(const char *format, ...);
int print_int(int n);
int _pow(int base, int index);
int print_string(char *str);
void put_special(char c);
int print_37(void);

#endif
