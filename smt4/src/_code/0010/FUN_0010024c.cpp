/* NON_MATCHING: built with --cpu=5TE -Ospace; only the register allocation differs (retail keeps the truncated character in r2 and loads each byte into r1, built does the opposite). */
#include "common.h"

extern "C" {

/* Returns the first occurrence of `c` in the string (the terminator counts), or NULL. */
char *FUN_0010024c(const char *s, int c)
{
    u8 ch = (u8)c;

    s--;
    do {
        s++;
        if (*(const u8 *)s == ch) {
            return (char *)s;
        }
    } while (*s != '\0');
    return NULL;
}

} /* extern "C" */
