#include "common.h"

extern "C" {

u32 wstrlen(const u16 *s);
s32 FUN_00439c74(const void *buffer, u32 length);

/* IPC request with a wide-string argument: passes the string and its length including the terminator. */
s32 FUN_00439c50(const u16 *str)
{
    return FUN_00439c74(str, str != NULL ? wstrlen(str) + 1 : 0);
}

} /* extern "C" */
