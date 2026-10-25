#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include <stddef.h>

typedef char CheckRestoreSnapshotOffset[offsetof(EffRenderState, restore.snapshot) == 0x530 ? 1 : -1];
typedef char CheckRestoreModeOffset[offsetof(EffRenderState, mode) == 0x5f4 ? 1 : -1];
typedef char CheckRestoreSourceOffset[offsetof(EffRenderState, restoreSource) == 0x6f8 ? 1 : -1];
typedef char CheckRestoreCompletionOffset[offsetof(EffRenderState, completion) == 0x118c ? 1 : -1];
typedef char CheckRestoreStateSize[sizeof(EffRenderState) == 0x1190 ? 1 : -1];

extern "C" s32 FUN_002c5210(EffRenderState *state, EffRenderRestoreSource *source);
extern "C" void FUN_002bbbc8(EffRenderState *state, const void *second, const void *first, void *snapshot);
extern "C" void FUN_002bbb74(u32 resource, u32 *completion);

// Select the appropriate saved render pair and prepare the effect's restore state.
extern "C" void effectRestoreSavedRenderPairs(EffRenderState *state, EffRenderRestoreSource *source)
{
    if (source == NULL)
        return;
    const void *second = NULL;
    const void *first = NULL;
    if (FUN_002c5210(state, source) == 1) {
        if (state->restore.selection == 0) {
            second = source->alternate.second;
            first = source->alternate.first;
        } else if (state->restore.selection == 1) {
            second = source->secondary.second;
            first = source->secondary.first;
        } else if (state->restore.selection == 2) {
            second = source->primary.second;
            first = source->primary.first;
        }
    } else {
        second = source->primary.second;
        first = source->primary.first;
    }
    FUN_002bbbc8(state, second, first, state->restore.snapshot);
    FUN_002bbb74(state->restore.resource, &state->completion);
    state->restoreSource = source;
    state->mode = 5;
}
