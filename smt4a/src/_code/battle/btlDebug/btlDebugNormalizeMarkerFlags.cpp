/* NON_MATCHING: mask-chain reassociation increases the frame from 12 to 28 bytes and changes register/load scheduling; O2 may restore retail lowering. */
#include "battle/btlMain.h"
#include <string.h>

namespace {
struct BattleDebugMasks {
    /* 0x000 */ u8 unk000[0x68];
    /* 0x068 */ u64 enabled0;
    /* 0x070 */ u8 unk070[0x18];
    /* 0x088 */ u64 enabled1;
    /* 0x090 */ u8 unk090[0x18];
    /* 0x0A8 */ u64 enabled2;
    /* 0x0B0 */ u8 unk0B0[0x20];
    /* 0x0D0 */ u64 primaryTrigger;
    /* 0x0D8 */ u8 unk0D8[0x20];
    /* 0x0F8 */ u64 enabled3;
    /* 0x100 */ u8 unk100[0x10];
    /* 0x110 */ u64 enabled4;
    /* 0x118 */ u8 unk118[8];
    /* 0x120 */ u64 secondaryMode;
};
}

extern "C" {
extern BattleDebugMasks g_btlDebugGlobals;
extern u64 DAT_00571678;
extern u64 DAT_00571720;

/* Normalize the marker-state flags for the active debug mode. */
void btlDebugNormalizeMarkerFlags(void*, BtlMainStateA* state)
{
    u64 flags;
    memcpy(&flags, state->markerMasks.words, sizeof(flags));
    if (flags & g_btlDebugGlobals.primaryTrigger) {
        flags = (flags | g_btlDebugGlobals.enabled0 | g_btlDebugGlobals.enabled1 |
                 g_btlDebugGlobals.enabled3 | g_btlDebugGlobals.enabled4 |
                 g_btlDebugGlobals.enabled2) & ~g_btlDebugGlobals.secondaryMode;
    } else if (flags & DAT_00571720) {
        flags = flags | g_btlDebugGlobals.enabled0 | g_btlDebugGlobals.enabled1 |
                 g_btlDebugGlobals.enabled3 | g_btlDebugGlobals.enabled4 |
                 g_btlDebugGlobals.enabled2 | g_btlDebugGlobals.secondaryMode;
        memcpy(state->markerMasks.words, &flags, sizeof(flags));
        return;
    } else {
        // The default path deliberately omits enabled2 from the clear mask.
        flags = ((flags & ~g_btlDebugGlobals.enabled0) | DAT_00571678) &
                ~g_btlDebugGlobals.enabled1 & ~g_btlDebugGlobals.enabled3 &
                ~g_btlDebugGlobals.enabled4 & ~g_btlDebugGlobals.secondaryMode;
    }
    memcpy(state->markerMasks.words, &flags, sizeof(flags));
}
} // extern "C"
