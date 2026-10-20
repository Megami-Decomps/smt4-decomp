/* NON_MATCHING: the 132-byte buffer sits at sp+16 in retail (a 4-byte gap above the outgoing arguments) but at sp+12 here */
#include "common.h"

extern "C" {

extern u32 g_aocDisplay;

extern void sysMemClear(u8 *buffer, s32 size);
extern s32 FUN_001b2bd8(u32 a, s32 kind, u32 b, u8 *buffer);
extern void FUN_001b2ebc(u32 display, u8 *buffer, u32 c, s32 d, s32 e, s32 f, s32 g);

/* Looks entry `a` of the given kind up into a cleared 0x80-byte buffer and, when found, shows it. */
static __inline void showEntry(u32 a, s32 kind, u32 b, u32 c)
{
    u8 buffer[0x84];
    s32 found;

    sysMemClear(buffer, 0x80);
    found = FUN_001b2bd8(a, kind, b, buffer);
    if (found != 0) {
        FUN_001b2ebc(g_aocDisplay, buffer, c, found + 8, 1, 0x80, found);
    }
}

void FUN_00470164(u32 a, u32 b, u32 c)
{
    showEntry(a, 0x10, b, c);
}

} /* extern "C" */
