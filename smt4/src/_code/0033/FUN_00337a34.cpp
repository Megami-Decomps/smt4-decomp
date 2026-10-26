/* NON_MATCHING: retained-id scan now uses the twin's plain static helper and matches; only the entry-flags clear differs (retail zeroes the two words with `stm {r3, ip}` from two zero registers, the u64 view stores through one register). */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"

extern "C" {
void FUN_00294f64(BtlLoadedActionResource *resource);
}

static bool isRetainedResource(const BtlMainState *state, s16 id)
{
    for (s32 index = 0; index < 42; ++index) {
        if (state->actionCleanup.retainedIds[index] == id) {
            return true;
        }
    }
    return false;
}

extern "C" {

// Release unretained resources belonging to the selected action and detach its combatant.
void FUN_00337a34(BtlMainState *state)
{
    if (state->actionCleanup.selectedAction != -1) {
        if (state->actionCleanup.selectedResource != NULL) {
            for (s32 index = 0; index < 42; ++index) {
                BtlLoadedActionResource *resource = state->actionCleanup.resources[index];
                if (resource != NULL && resource->id == state->actionCleanup.selectedResource->id &&
                    !isRetainedResource(state, (s16)resource->id)) {
                    FUN_00294f64(resource);
                    state->actionCleanup.resources[index] = NULL;
                }
            }
            state->actionCleanup.selectedResource = NULL;
        }
        state->actions[state->actionCleanup.selectedAction].status = 0;
        BtlEntry *entry = &state->entries[state->actions[state->actionCleanup.selectedAction].participant.combatantIndex];
        // A 64-bit member would realign the shared byte union and shift the remaining entry fields.
        struct EntryFlagsView { u64 flags; };
        reinterpret_cast<EntryFlagsView *>(entry)->flags = 0;
        state->actions[state->actionCleanup.selectedAction].participant.combatantIndex = -1;
        state->actionCleanup.selectedAction = -1;
    }
}
}
