/* NON_MATCHING: global mask and state flag loads use different scratch registers and load ordering. */
#include "battle/btlEncount.h"
#include "battle/btlEvent.h"
#include "battle/btlMain.h"

extern "C" {
extern BtlEvent *g_btlEvent;
extern BtlEncounterGlobalsA g_btlEncount;
s32 FUN_004d7a70(BtlEvent *event, s32 kind, u32 id, s32 enabled);

// Classify the encounter transition from event state and battle state masks.
u32 FUN_003e0f94(u32, const BtlMainStateA *state)
{
    if (FUN_004d7a70(g_btlEvent, 11, 0xFFFFFFFF, 1) != 0) {
        return 5;
    }
    if (!state->encounterGate.disabled &&
        ((state->encounter.statusFlags & 0x02000000) != 0 ||
         ((g_btlEncount.initialStateMask & state->stateFlags64.bits) != 0 &&
          state->encounter.mode == 0))) {
        return 1;
    }
    if (state->encounter.mode == 1) {
        return 2;
    }
    if ((state->encounter.controlFlags & 0x80) == 0) {
        return 0;
    }
    return (g_btlEncount.queuedStateMask & state->stateFlags64.bits) != 0 ? 4 : 3;
}
}
