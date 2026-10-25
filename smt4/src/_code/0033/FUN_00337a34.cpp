/* NON_MATCHING: retained-ID scan unrolls; saved state/resource registers and combatant flag stores differ. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"

extern "C" {
void FUN_00294f64(BtlLoadedActionResource *resource);

// Release unretained resources belonging to the selected action and detach its combatant.
void FUN_00337a34(BtlMainState *state)
{
    if (state->actionCleanup.selectedAction != -1) {
        if (state->actionCleanup.selectedResource != NULL) {
            for (s32 index = 0; index < 42; ++index) {
                BtlLoadedActionResource *resource = state->actionCleanup.resources[index];
                if (resource != NULL && resource->id == state->actionCleanup.selectedResource->id) {
                    s16 id = static_cast<s16>(resource->id);
                    s32 retained = 0;
                    for (; retained < 42; retained += 2) {
                        if (state->actionCleanup.retainedIds[retained] == id ||
                            state->actionCleanup.retainedIds[retained + 1] == id) {
                            break;
                        }
                    }
                    if (retained == 42) {
                        FUN_00294f64(resource);
                        state->actionCleanup.resources[index] = NULL;
                    }
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
