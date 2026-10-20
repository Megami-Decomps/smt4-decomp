#include "common.h"

extern "C" {

int strAssign(u8 *buffer, u32 source, u32 length, u32 limit);
int strInit(u8 *buffer);
u32 FUN_002ec774(u32 dest, u32 arg, u8 *buffer, u32 flags);
int strDestroy(u8 *buffer);
u32 wstrlen(u32 source);

/* Builds a 36-byte temporary from `source`, runs FUN_002ec774 with it, and returns that call's result. */
u32 FUN_001222f4(u32 dest, u32 arg, u32 source, u32 flags)
{
    u8 buffer[36];
    u32 result;
    u32 length;

    strInit(buffer);
    length = wstrlen(source);
    strAssign(buffer, source, length, 0xffffffff);
    result = FUN_002ec774(dest, arg, buffer, flags);
    strDestroy(buffer);
    return result;
}

} /* extern "C" */
