/* NON_MATCHING: retail keeps index in caller-clobbered r3 across FUN_00334044; separate-unit compilation saves it in r5. */
#include "common.h"

struct SelectionWorkA {
    /* 0x0000 */ u8 unk0000[0x1374];
    /* 0x1374 */ s32 selection;
    /* 0x1378 */ u8 unk1378[0xc9c];
    /* 0x2014 */ u8 refresh;
};

struct SelectionGlobalsA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SelectionWorkA* work;
};

extern "C" {
extern SelectionGlobalsA g_gameGlobals;
s32 FUN_00334044(void);
void FUN_0021af2c(void);

// Clamp the selection to the last entry, update the display, and clear refresh.
void FUN_00372048(s32 index)
{
    SelectionWorkA* work = g_gameGlobals.work;
    if (index < FUN_00334044())
        work->selection = index;
    else
        work->selection = FUN_00334044() - 1;
    FUN_0021af2c();
    work->refresh = 0;
}
}
