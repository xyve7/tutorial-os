#include <term/term.h>

static volatile struct limine_terminal_request terminal_request = {
    .id = LIMINE_TERMINAL_REQUEST,
    .revision = 0
};
struct limine_terminal *terminal;

void term_print_char(const char ch)
{
	char to_print[2] = {ch, 0};
	terminal_request.response->write(terminal, to_print, 1);
}
void term_print_str_n(const char* str, size_t n)
{
	terminal_request.response->write(terminal, str, n);
}
void term_print_str(const char* str)
{
	while(*str)
	{
		term_print_char(*str);
		str++;
	}
}
void term_init()
{
	if (terminal_request.response == NULL || terminal_request.response->terminal_count < 1)
        for (;;) { __asm__("hlt"); }
	terminal = terminal_request.response->terminals[0];
}