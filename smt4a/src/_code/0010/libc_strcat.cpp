#include "common.h"

extern "C" {

/* strcat: appends the string `src` to the end of `dst`. */
char *libc_strcat(char *dst, const char *src)
{
    char *end = dst - 1;
    char c;

    do {
        end++;
    } while (*end != '\0');
    do {
        c = *src++;
        *end++ = c;
    } while (c != '\0');
    return dst;
}

} /* extern "C" */
