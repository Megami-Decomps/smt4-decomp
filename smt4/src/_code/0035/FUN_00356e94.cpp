/* NON_MATCHING: packed command stores and cursor induction use different grouping and registers. */
#include "common.h"

extern "C" {
void memClear(void *destination, u32 byteCount);
u32 *FUN_001394c8(void);
u32 *asdGxAppendStateReset(u32 *commands, u32 enabled);
u32 *FUN_003572e8(u32 *commands, u32 enabled);
u32 *FUN_00356d98(u32 *commands, u32 enabled);

// Build the default GPU state packet, including all twelve attribute slots.
u32 *FUN_00356e94(void)
{
    u32 *commands = FUN_001394c8();
    commands[1] = 0x000F0201;
    commands[0] = 0;
    commands[3] = 0x000F0202;
    commands[2] = 0;
    u32 *cursor = commands + 4;
    memClear(cursor, 0x98);
    cursor[1] = 0x823F0203;
    cursor += 0x98 / sizeof(u32);
    for (u32 index = 0; index < 12; ++index) {
        cursor[2] = 0;
        cursor[3] = 0;
        cursor[4] = 0;
        cursor[5] = 0;
        cursor[0] = index;
        cursor[1] = 0x803F0232;
        cursor += 6;
    }
    cursor[0] = 0;
    cursor[1] = 0x000100E0;
    cursor = asdGxAppendStateReset(cursor + 2, 1);
    cursor = FUN_003572e8(cursor, 1);
    cursor[0] = 0;
    cursor[1] = 0x00010062;
    cursor[2] = 0;
    cursor[3] = 0x00010118;
    cursor[4] = 0;
    cursor[5] = 0x00010047;
    cursor = FUN_00356d98(cursor + 6, 1);
    cursor[0] = 0;
    cursor[1] = 0x000F011B;
    return cursor + 2;
}
}
