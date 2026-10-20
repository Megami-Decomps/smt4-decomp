/* Formats a message into a local 52-byte wide-character buffer whose first character is the given one. */
#include "common.h"

extern "C" {

s32 FUN_002b46f8(u16 *buffer, u32 arg1, u32 arg2, s32 size, u8 *format);
u32 dataTableGetCount(u32 id);
u32 dataTableGetEntries(void);
u32 dataTableGet(u32 category, u32 variant);

void FUN_0033b748(u16 character)
{
    u32 id;
    u32 arg1;
    u32 arg2;
    u16 buffer[26];

    id = dataTableGet(0x14, 1);
    arg1 = dataTableGetEntries();
    arg2 = dataTableGetCount(id);
    buffer[0] = character;
    FUN_002b46f8(buffer, arg1, arg2, 0x34, (u8 *)0x001b1804); /* format string in rodata */
}

} /* extern "C" */
