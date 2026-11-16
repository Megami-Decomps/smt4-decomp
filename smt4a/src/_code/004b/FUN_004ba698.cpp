#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "ui/UiSpriteState.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
s32 rangeGetMinimumLimit(SequentialAnimationPrefixA *state);
void uiSpriteAdvanceAnimation(UiSpriteState *sprite, f32 step);
void FUN_00167458(UiSpriteState *sprite, s32 mode);
s8 uiSpriteGetCompletionState(const UiSpriteState *sprite);

// Reveals the rows up to the current progress, then reports whether the intro and the last row finished.
s32 FUN_004ba698(SequentialAnimationPrefixA *state)
{
    if (state->activeState == 0) {
        return 1;
    }
    if (state->textureId != -1 && !asdTMTexTableNodeIsLoaded(31, state->textureId)) {
        return 0;
    }
    s32 count = rangeGetMinimumLimit(state);
    for (s32 i = 0; i < count; ++i) {
        if (i <= state->progress) {
            uiSpriteAdvanceAnimation(&state->rows[i], 1.0f);
        }
    }
    ++state->progress;
    UiSpriteState *intro = &state->intro;
    FUN_00167458(intro, 0);
    if (uiSpriteGetCompletionState(intro) && state->progress > count &&
        uiSpriteGetCompletionState(&state->rows[count - 1])) {
        state->completion = 1;
    }
    return state->completion;
}
}
