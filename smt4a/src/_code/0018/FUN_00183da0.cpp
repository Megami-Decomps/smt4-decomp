/* NON_MATCHING: retail 46 vs built 39 rows; format flags use constant data instead of retail's stack-initialized lookup. */
#include "common.h"

extern "C" void FUN_001b4120(const void *, u32);

extern "C" void FUN_00183da0(s32 width, u32 height, u32 format, u32 physicalAddress,
                            u32 wrap, u32 minFilter, u32 magFilter)
{
    static const u32 formatFlags[14] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x20, 0
    };
    u32 commands[14] = {0};
    commands[1] = 0x809F0081;
    commands[2] = height | (static_cast<u32>(width) << 16);
    commands[3] = (wrap << 12) | (wrap << 8) | (minFilter << 2) |
                  (magFilter << 1) | formatFlags[format];
    commands[5] = physicalAddress >> 3;
    commands[12] = format;
    commands[13] = 0xF008E;
    FUN_001b4120(commands, sizeof(commands));
}
