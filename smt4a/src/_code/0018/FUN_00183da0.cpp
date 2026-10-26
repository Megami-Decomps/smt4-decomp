/* NON_MATCHING: code matches except the pool base: retail addresses its two local initialiser tables (format flags, command template) at DAT_0053d500+0x78 and +0xb0, i.e. the const data of a larger translation unit (0x78 bytes of earlier command templates precede them); here they sit at the start of the unit's own .constdata. */
#include "common.h"

extern "C" void FUN_001b4120(const void *, u32);

extern "C" void FUN_00183da0(s32 width, u32 height, u32 format, u32 physicalAddress,
                            u32 wrap, u32 minFilter, u32 magFilter)
{
    u32 formatFlags[14] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x20, 0
    };
    u32 commands[14] = {
        0, 0x809F0081, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xF008E
    };
    commands[2] = height | (static_cast<u32>(width) << 16);
    commands[3] = (wrap << 12) | (wrap << 8) | (minFilter << 2) |
                  (magFilter << 1) | formatFlags[format];
    commands[5] = physicalAddress >> 3;
    commands[12] = format;
    FUN_001b4120(commands, sizeof(commands));
}
