/* NON_MATCHING: retail reloads the data-blocks pointer for each of the two stores (two loads from the pool word, two address computations); built shares one. */
#include "common.h"

extern "C" {

typedef struct GameBlocks {
    /* 0x0000 */ u8 unk0000[0x12F3];
    /* 0x12F3 */ u8 isSeven;
    /* 0x12F4 */ u8 unk12F4[0xB73];
    /* 0x1E67 */ u8 value;
} GameBlocks;

typedef struct GameGlobals {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ GameBlocks *blocks;
} GameGlobals;

extern GameGlobals g_gameGlobals;

/* Stores value `value` (7 is stored as 3) and whether it was 7. */
void gameGlobalsSetSelected(s32 value)
{
    u8 isSeven = value == 7;

    if (isSeven) {
        value = 3;
    }
    g_gameGlobals.blocks->isSeven = isSeven;
    g_gameGlobals.blocks->value = value;
}

} /* extern "C" */
