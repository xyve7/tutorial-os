#include <libc/stdio.h>

int puts(const char* str)
{
	term_print_str(str);
	return 0;
}