#include "common.h"

extern "C" {

/* Fills a two-word command (1, 0xF0000 | code) where code is 0x23C or, when `alt` is set, 0x23D; returns the address after it. */
u32 *FUN_001af0d0(u32 *command, s32 alt)
{
    u32 code;

    if (alt == 0) {
        code = 0x23C;
    } else {
        code = 0x23D;
    }
    command[0] = 1;
    command[1] = code | 0xF0000;
    return command + 2;
}

} /* extern "C" */
