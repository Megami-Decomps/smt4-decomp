#include "common.h"

extern "C" {

u32 libc_strlen(const char *str);
s32 FUN_0035fba0(const char *str, u32 size);

/* Sends a string (with its terminator) through FUN_0035fba0; NULL is sent as an empty buffer. */
s32 FUN_0035fb7c(const char *str)
{
    u32 size = str != NULL ? libc_strlen(str) + 1 : 0;

    return FUN_0035fba0(str, size);
}

} /* extern "C" */
