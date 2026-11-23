/* NON_MATCHING: encounter-mask loads and their AND operations use different scratch registers and scheduling. */
#include "battle/btlEncount.h"
#include "battle/btlEvent.h"
#include "battle/btlMain.h"
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

extern BtlEvent *g_btlEvent;
extern BtlEncounterGlobalsA g_btlEncount;
s32 FUN_004d7a70(BtlEvent *event, s32 kind, u32 id, s32 enabled);

/* Classifies the encounter transition from the event state and battle masks. */
u32 FUN_003e0f94(u32, const BtlMainStateA *state)
{
    if (FUN_004d7a70(g_btlEvent, 11, 0xFFFFFFFF, 1) != 0) {
        return 5;
    }
    const BtlEncounterGlobalsA *encounters = &g_btlEncount;
    u32 type;
    if (!state->encounterGate.disabled &&
        ((state->encounter.statusFlags & 0x02000000) != 0 ||
         (battleMaskIntersects(state->stateFlags64.bits, encounters->initialStateMask) &&
          state->encounter.mode == 0))) {
        type = 1;
    } else if (state->encounter.mode == 1) {
        type = 2;
    } else if ((state->encounter.controlFlags & 0x80) == 0) {
        type = 0;
    } else {
        type = battleMaskIntersects(state->stateFlags64.bits, encounters->queuedStateMask) ? 4 : 3;
    }
    return type;
}

} /* extern "C" */
