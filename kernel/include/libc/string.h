#ifndef STRING_H
#define STRING_H

#include <stddef.h>

void* memcpy(void* restrict dest, const void* restrict src, size_t n);
char* strcpy(char* restrict dest, const char* restrict src);
char* strncpy(char* restrict dest, const char* restrict src, size_t n);
int memcmp(const void* ptr1, const void* ptr2, size_t n);
int strcmp(const char* str1, const char* str2);
int strncmp(const char* str1, const char* str2, size_t n);
void* memset(void* dest, int c, size_t n);
size_t strlen(const char* str);

#endif // !STRING_H