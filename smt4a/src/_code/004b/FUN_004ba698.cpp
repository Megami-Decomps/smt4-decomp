/* NON_MATCHING: Animation flag zero-tests use unsigned byte loads and different address grouping. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
s32 asdTMTexTableNodeIsLoaded(u32 tableId);
s32 rangeGetMinimumLimit(SequentialAnimationPrefixA *state);
void FUN_00163aa4(void *work, f32 step);
void FUN_00167458(void *work, s32 mode);

s32 FUN_004ba698(SequentialAnimationPrefixA *state)
{
    if (state->activeState == 0)
        return 1;

    if (state->textureId != -1 && asdTMTexTableNodeIsLoaded(31) == 0)
        return 0;

    const s32 count = rangeGetMinimumLimit(state);
    u8 *bytes = reinterpret_cast<u8 *>(state);
    for (s32 i = 0; i < count; ++i) {
        if (i <= state->progress) {
            FUN_00163aa4(bytes + (0xA10u + static_cast<u32>(i) * 0x8Cu),
                         1.0f);
        }
    }

    state->progress = static_cast<s32>(static_cast<u32>(state->progress) + 1u);
    FUN_00167458(state->introWork, 0);

    if (state->introFinished != 0 && state->progress > count &&
        *reinterpret_cast<s8 *>(bytes +
            (0xA0Eu + static_cast<u32>(count) * 0x8Cu)) != 0) {
        state->completion = 1;
    }

    return state->completion;
}
}
