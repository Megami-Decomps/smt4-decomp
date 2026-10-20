/* Formats a message into a local 100-byte buffer from a lookup chosen by the flag; the first byte of the buffer is the given character. */
#include "common.h"

extern "C" {

s32 FUN_00100854(u8 *buffer, u32 arg1, u32 arg2, s32 size, u8 *format);
u32 dataTableGet(u32 category, u32 variant);
u32 dataTableGetCount(u32 id);
u32 dataTableGetEntries(void);

void FUN_002cc228(u8 character, s32 alternate)
{
    u32 id;
    u32 arg1;
    u32 arg2;
    u8 buffer[100];

    if (alternate != 0) {
        id = dataTableGet(0x16, 0);
    } else {
        id = dataTableGet(0x16, 1);
    }
    arg1 = dataTableGetEntries();
    arg2 = dataTableGetCount(id);
    buffer[0] = character;
    FUN_00100854(buffer, arg1, arg2, 100, (u8 *)0x003d4e88); /* format string in rodata */
}

} /* extern "C" */
