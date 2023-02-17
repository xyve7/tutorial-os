#include <stdint.h>
#include <stddef.h>
#include <limine.h>
#include <term.h>

void _start(void) 
{
    term_init();
	term_print_str("Hello World");
    for (;;) { __asm__("hlt"); }
}