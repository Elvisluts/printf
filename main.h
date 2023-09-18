#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


/**
  * struct conversion - structure conversions
  * @format: characer representing the format
  * @handler: function to handle conversions
  */

typedef struct conversion
{
	char formart;
	int (*handler)(int, va_list);
} coversion;

int _printf(const char *format, ...);
int handle_character(int char_printed_count, va_list args);
int handle_strings(int char_printed_count, va_list args);
int handle_integers(int char_printed_count, va_list args);
int handle_binary(int count, va_list args);
int handle_unsigned_decimal(int char_printed_count, va_list args);
int handle_hex_lower(int char_printed_count, va_list args);
int handle_hex_upper(int char_printed_count, va_list args);
int handle_octal(int char_printed_count, va_list args);
int handle_address(int char_printed_count, va_list args);
int (*get_handler(char_format))(int, va_list);

#endif
