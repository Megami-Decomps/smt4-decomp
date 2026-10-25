#include "ui/UiSpriteState.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct ListTransitionWork {
    u8 unk00[8];
    u32 enabled;
    u8 unk0C[0xBC];
    UiSpriteState slide;
    u8 unk154[0x4DD];
    s8 complete;
    u8 unk632[0x22];
    UiSpriteState rows[11];
    s32 revealed;
    u8 unkC5C[8];
    s32 texture;
};
extern "C" {
s32 rangeLimitMin(ListTransitionWork *);
void FUN_002bf818(UiSpriteState *);
void FUN_002b8ee0(UiSpriteState *, s32);
s8 uiSpriteGetCompletionState(const UiSpriteState *);
}

extern "C" s32 listUpdateRevealTransition(ListTransitionWork *work)
{
    if (work->enabled == 0) {
        return 1;
    }
    if (work->texture != -1 && !asdTMTexTableNodeIsLoaded(0x2A, work->texture)) {
        return 0;
    }
    s32 count = rangeLimitMin(work);
    for (s32 i = 0; i < count; ++i) {
        if (i <= work->revealed) {
            FUN_002bf818(&work->rows[i]);
        }
    }
    ++work->revealed;
    UiSpriteState *slide = &work->slide;
    FUN_002b8ee0(slide, 0);
    if (uiSpriteGetCompletionState(slide) && work->revealed > count &&
        uiSpriteGetCompletionState(&work->rows[count - 1])) {
        work->complete = 1;
    }
    return work->complete;
}
