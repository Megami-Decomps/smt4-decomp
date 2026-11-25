#include "battle/BtlMainAccess.h"

/* Adds an encounter exclusion ID to the first free slot, unless it is already present. */
extern "C" void btlAddEncounterExclusionId(BtlMainStateA *state, s32 id)
{
    if (btlPairedEntryTableContains(state, id)) {
        return;
    }
    enum { EXCLUSION_COUNT = sizeof(state->encounterExclusions.ids) / sizeof(s32) };
    for (s32 i = 0; i < EXCLUSION_COUNT; ++i) {
        if (state->encounterExclusions.ids[i] == 0) {
            state->encounterExclusions.ids[i] = id;
            return;
        }
    }
}
