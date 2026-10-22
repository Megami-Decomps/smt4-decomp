/* NON_MATCHING: transition completion tests and sprite-array address formation differ. */
#include "ui/UiSpriteState.h"

struct ListTransitionWork {
    u8 unk00[8];
    u32 enabled;
    u8 unk0C[0xBC];
    UiSpriteState slide;
    u8 unk154[0x4DD];
    u8 complete;
    u8 unk632[0x22];
    UiSpriteState rows[11];
    s32 revealed;
    u8 unkC5C[8];
    s32 texture;
};
extern "C" {
s32 rangeLimitMin(ListTransitionWork *);
s32 asdTMTexTableNodeIsLoaded(u32);
void FUN_002bf818(UiSpriteState *);
void FUN_002b8ee0(UiSpriteState *, s32);
}

extern "C" s32 FUN_0022b14c(ListTransitionWork *work)
{
    if (work->enabled == 0) {
        return 1;
    }
    if (work->texture != -1 && !asdTMTexTableNodeIsLoaded(0x2A)) {
        return 0;
    }
    s32 count = rangeLimitMin(work);
    for (s32 i = 0; i < count; ++i) {
        if (i <= work->revealed) {
            FUN_002bf818(&work->rows[i]);
        }
    }
    ++work->revealed;
    FUN_002b8ee0(&work->slide, 0);
    if (work->slide.unk86[4] && work->revealed < count && work->rows[count - 1].unk86[4]) {
        work->complete = 1;
    }
    return work->complete;
}
