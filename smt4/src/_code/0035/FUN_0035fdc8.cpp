#include "common.h"

extern "C" {

u32 libc_strlen(const char *s);
s32 FUN_0035fdec(const char *str, u32 length);

/* IPC request with a string argument: passes the string and its length including the terminator. */
s32 FUN_0035fdc8(const char *str)
{
    return FUN_0035fdec(str, str != NULL ? libc_strlen(str) + 1 : 0);
}

} /* extern "C" */
