#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#include <unistd.h>
#include<limits.h>
#include <stdarg.h>

int powerof(int base, int power);
int _printf(char *format, ...);
int _putchar(char c, char *buf, int counter);
int _puts(char *c, char *buf, int counter);
int _put_pers(int counter, char *buf);
int _put_decimal(long a, int counter, char *buf);
int _put_octa(long a, int counter, char *buf);
int _put_hexa(long a, int counter, char *buf);
int _put_hexa_cap(long a, int counter, char *buf);
int _put_i(long a, int counter, char *buf);
int _put_bi(unsigned int a, int counter, char *buf);
int _put_uunsigned(long a, int counter, char *buf);
int _put_S(char *a, int counter, char *buf);
int put_addr(const void *s, int counter, char *buf);
int _put_hdecimal(short int a, int counter, char *buf);
int _put_hi(short int a, int counter, char *buf);
int _put_hunsigned(short int a, int counter, char *buf);
int _put_hocta(short int a, int counter, char *buf);
int _put_hhexa(short int a, int counter, char *buf);
int _put_hhexa_cap(short int a, int counter, char *buf);
int _put_rev(char *p, int counter, char *buf);
int _strlen(char *s);
int _put_rot(char *s, char *buf, int counter);
int _put_plus(long a, int counter, char *buf);
int _put_space(long a, int counter, char *buf);
int deal_with_spec(va_list specifier, char *format, char *buffer, int counter);
void flush(char *buf, int counter);
int put_next_spec(va_list specifier, char *format, char *buffer, int counter);
int put_next_edit(va_list specifier, char *format, char *buffer, int counter);
int put_next_hndl(va_list specifier, char *format, char *buffer, int counter);
int put_next_hn(va_list specifier, char *format, char *buffer, int counter);
int put_next_hl(va_list specifier, char *format, char *buffer, int counter);

#endif
