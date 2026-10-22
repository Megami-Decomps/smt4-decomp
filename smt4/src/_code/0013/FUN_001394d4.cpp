/* NON_MATCHING: retail advances a command-builder cursor with padded-length arithmetic; fixed-index writes optimize differently. */
#include "common.h"

extern "C" u32 *FUN_001394d4(u32 *commands, u32 mode, u32 value)
{
    commands[0] = mode != 0 ? 0x300 : value << 8;
    commands[1] = 0x2025e;
    commands[2] = 0;
    commands[3] = 0x900251;
    u32 *cursor = commands + 4;
    u32 pairs = 5;
    do {
        *cursor++ = 0xead0fead;
        *cursor++ = 0xead0fead;
    } while (--pairs != 0);
    commands[0xe] = 0;
    commands[0xf] = 0x1d00200;
    cursor = commands + 0x10;
    pairs = 15;
    do {
        *cursor++ = 0xead0fead;
        *cursor++ = 0xead0fead;
    } while (--pairs != 0);
    commands[0x2e] = mode == 0 ? 0 : 2;
    commands[0x2f] = 0x10229;
    commands[0x30] = 0;
    commands[0x31] = 0x1d00200;
    cursor = commands + 0x32;
    pairs = 15;
    do {
        *cursor++ = 0xead0fead;
        *cursor++ = 0xead0fead;
    } while (--pairs != 0);
    commands[0x50] = mode;
    commands[0x51] = 0x10244;
    return commands + 0x52;
}
