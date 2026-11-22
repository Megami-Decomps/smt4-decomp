/* NON_MATCHING: 104 lines (89 vs 93 rows): direct markerMasks.bits sequential ops match retail's 12-byte frame and all three branches; retail keeps &state->markerMasks.bits in sl and spills enabled1.hi instead. */
#include "battle/btlMain.h"

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
void btlDebugNormalizeMarkerFlags(void *, BtlMainStateA *state)
{
    if (state->markerMasks.bits & g_btlDebugGlobals.primaryTrigger) {
        state->markerMasks.bits |= g_btlDebugGlobals.enabled0;
        state->markerMasks.bits |= g_btlDebugGlobals.enabled1;
        state->markerMasks.bits |= g_btlDebugGlobals.enabled3;
        state->markerMasks.bits |= g_btlDebugGlobals.enabled4;
        state->markerMasks.bits |= g_btlDebugGlobals.enabled2;
        state->markerMasks.bits &= ~g_btlDebugGlobals.secondaryMode;
    } else if (state->markerMasks.bits & DAT_00571720) {
        state->markerMasks.bits |= g_btlDebugGlobals.enabled0;
        state->markerMasks.bits |= g_btlDebugGlobals.enabled1;
        state->markerMasks.bits |= g_btlDebugGlobals.enabled3;
        state->markerMasks.bits |= g_btlDebugGlobals.enabled4;
        state->markerMasks.bits |= g_btlDebugGlobals.enabled2;
        state->markerMasks.bits |= g_btlDebugGlobals.secondaryMode;
    } else {
        /* The default path deliberately omits enabled2 from the clear mask. */
        state->markerMasks.bits &= ~g_btlDebugGlobals.enabled0;
        state->markerMasks.bits |= DAT_00571678;
        state->markerMasks.bits &= ~g_btlDebugGlobals.enabled1;
        state->markerMasks.bits &= ~g_btlDebugGlobals.enabled3;
        state->markerMasks.bits &= ~g_btlDebugGlobals.enabled4;
        state->markerMasks.bits &= ~g_btlDebugGlobals.secondaryMode;
    }
}
} /* extern "C" */
