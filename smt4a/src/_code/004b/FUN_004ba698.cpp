/* NON_MATCHING: texture-node receiver and native signed sprite getters recovered; row-stride scratch and progress-update register scheduling differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "ui/UiSpriteState.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* The row array occupies the opaque shared-prefix bytes up to progress. */
struct SequentialAnimationRowsViewA {
    u8 prefix[0xA10];
    UiSpriteState rows[11];
};
typedef char SequentialAnimationRowsViewALayoutCheck[
    offsetof(SequentialAnimationRowsViewA, rows) == 0xA10 &&
    sizeof(SequentialAnimationRowsViewA) == offsetof(SequentialAnimationPrefixA, progress) ? 1 : -1];

extern "C" {
s32 rangeGetMinimumLimit(SequentialAnimationPrefixA *state);
void FUN_00163aa4(void *work, f32 step);
void FUN_00167458(void *work, s32 mode);
s8 uiSpriteGetCompletionState(const void *sprite);

s32 FUN_004ba698(SequentialAnimationPrefixA *state)
{
    if (state->activeState == 0)
        return 1;

    if (state->textureId != -1 && asdTMTexTableNodeIsLoaded(31, state->textureId) == 0)
        return 0;

    const s32 count = rangeGetMinimumLimit(state);
    SequentialAnimationRowsViewA *sprites = reinterpret_cast<SequentialAnimationRowsViewA *>(state);
    for (s32 i = 0; i < count; ++i) {
        if (i <= state->progress) {
            FUN_00163aa4(&sprites->rows[i], 1.0f);
        }
    }

    ++state->progress;
    void *intro = state->introWork;
    FUN_00167458(intro, 0);

    if (uiSpriteGetCompletionState(intro) != 0 && state->progress > count &&
        uiSpriteGetCompletionState(&sprites->rows[count - 1]) != 0) {
        state->completion = 1;
    }

    return state->completion;
}
}
