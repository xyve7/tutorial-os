#include <stdint.h>
#include <stddef.h>
#include <limine.h>
#include <term.h>
#include <libc/stdio.h>

void _start(void) 
{
    printf("Hello %s World!\n", "Formatted");
    for (;;) { __asm__("hlt"); }
}