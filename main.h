#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#include <unistd.h>
#include<limits.h>
#include <stdarg.h>

/**
 * ret - counter + return count
 * @counter: first member
 * @ret_count: return count
 * @Describtion: tracks the buffer index and the return count
 */

typedef struct ret {
	int counter;
	int ret_count;
} cr;
int powerof(int base, int power);
int _printf(char *format, ...);
cr _putchar(char c, char *buf, cr counter);
cr _puts(char *c, char *buf, cr counter);
cr _put_pers(cr counter, char *buf);
cr _put_decimal(long a, cr counter, char *buf);
cr _put_octa(long a, cr counter, char *buf);
cr _put_hexa(long a, cr counter, char *buf);
cr _put_hexa_cap(long a, cr counter, char *buf);
cr _put_i(long a, cr counter, char *buf);
cr _put_bi(unsigned int a, cr counter, char *buf);
cr _put_uunsigne(long a, cr counter, char *buf);
cr _put_S(char *a, cr counter, char *buf);
cr put_addr(const void *s, cr counter, char *buf);
cr _put_hdecimal(short int a, cr counter, char *buf);
cr _put_hi(short int a, cr counter, char *buf);
cr _put_hunsigne(short int a, cr counter, char *buf);
cr _put_hocta(short int a, cr counter, char *buf);
cr _put_hhexa(short int a, cr counter, char *buf);
cr _put_hhexa_cap(short int a, cr counter, char *buf);
cr _put_rev(char *p, cr counter, char *buf);
int _strlen(char *s);
cr _put_rot(char *s, char *buf, cr counter);
cr _put_plus(long a, cr counter, char *buf);
cr _put_space(long a, cr counter, char *buf);
cr deal_with_spec(va_list specifier, char *format, char *buffer, cr counter);
void flush(char *buf, int counter);
cr put_next_spec(va_list specifier, char *format, char *buffer, cr counter);
cr put_next_edit(va_list specifier, char *format, char *buffer, cr counter);
cr put_next_hndl(va_list specifier, char *format, char *buffer, cr counter);
cr put_next_hn(va_list specifier, char *format, char *buffer, cr counter);
cr put_next_hl(va_list specifier, char *format, char *buffer, cr counter);

#endif
