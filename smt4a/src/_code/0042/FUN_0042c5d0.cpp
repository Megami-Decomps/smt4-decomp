/* NON_MATCHING: the command tail and the slot records (post-increment stores) match; retail stores the first header words one by one with the zero in r4 (build: an stm and the zero in r5), which renames the zero register throughout. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
u32 *FUN_00188a34(void);
u32 *asdGxAppendStateReset(u32 *commands, u32 enabled);
u32 *FUN_0042cbd8(u32 *commands, u32 enabled);
u32 *FUN_0042c3c4(u32 *commands, u32 enabled);

// Build the default GPU state packet, including all twelve attribute slots.
u32 *FUN_0042c5d0(void)
{
    u32 *commands = FUN_00188a34();
    commands[1] = 0x000F0201;
    commands[0] = 0;
    commands[3] = 0x000F0202;
    commands[2] = 0;
    u32 *cursor = commands + 4;
    sysMemClear(cursor, 0x98);
    cursor[1] = 0x823F0203;
    cursor += 0x98 / sizeof(u32);
    for (u32 index = 0; index < 12; ++index) {
        *cursor++ = index;
        *cursor++ = 0x803F0232;
        *cursor++ = 0;
        *cursor++ = 0;
        *cursor++ = 0;
        *cursor++ = 0;
    }
    *cursor++ = 0;
    *cursor++ = 0x000100E0;
    cursor = asdGxAppendStateReset(cursor, 1);
    cursor = FUN_0042cbd8(cursor, 1);
    *cursor++ = 0;
    *cursor++ = 0x00010062;
    *cursor++ = 0;
    *cursor++ = 0x00010118;
    *cursor++ = 0;
    *cursor++ = 0x00010047;
    cursor = FUN_0042c3c4(cursor, 1);
    *cursor++ = 0;
    *cursor++ = 0x000F011B;
    return cursor;
}
}
