#ifndef TERM_H
#define TERM_H

#include <limine.h>
#include <stddef.h>

void term_print_char(const char ch);
void term_print_str_n(const char* str, size_t n);
void term_print_str(const char* str);
void term_init();

#endif // !TERM_H