/* Formats a message into a local 12-byte wide-character buffer whose first character is the given one. */
#include "common.h"

extern "C" {

s32 FUN_002b46f8(u16 *buffer, u32 arg1, u32 arg2, s32 size, u8 *format);
u32 dataTableGetCount(u32 id);
u32 dataTableGetEntries(void);
u32 dataTableGet(u32 category, u32 variant);

void dataTable11Sub2GetRecord(u16 character)
{
    u32 id;
    u32 arg1;
    u32 arg2;
    u16 buffer[6];

    id = dataTableGet(0x11, 2);
    arg1 = dataTableGetEntries();
    arg2 = dataTableGetCount(id);
    buffer[0] = character;
    FUN_002b46f8(buffer, arg1, arg2, 12, (u8 *)0x001b1814); /* format string in rodata */
}

} /* extern "C" */
