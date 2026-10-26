/* NON_MATCHING: armcc threads the first iteration of the first loop (`i == 0` known on entry) where retail tests i == 0 each pass; view/index/complete registers follow from that. */
#include "ui/UiSpriteState.h"
struct StagedAnimationView {
    u8 prefix[0x2D84];
    UiSpriteState first[6];
    u8 unk30CC[0x8C];
    UiSpriteState reveals[6];
    u8 unk34A0[0xA8];
    s32 counters[6];
    u8 unk3560[0xB8];
    u32 soundEnabled[6];
    u8 unk3630[0x18];
    u8 soundPlayed[6];
};
typedef char StagedAnimationOffsets[offsetof(StagedAnimationView, first) == 0x2D84 &&
    offsetof(StagedAnimationView, reveals) == 0x3158 &&
    offsetof(StagedAnimationView, counters) == 0x3548 &&
    offsetof(StagedAnimationView, soundEnabled) == 0x3618 &&
    offsetof(StagedAnimationView, soundPlayed) == 0x3648 ? 1 : -1];
extern "C" {
s8 uiSpriteGetCompletionState(const UiSpriteState *sprite);
void FUN_002bf810(u32 sound);
s32 FUN_002bf818(UiSpriteState *sprite);
u32 FUN_002960ec(StagedAnimationView *view)
{
    u32 complete = 1;
    for (s32 i = 0; i < 6; ++i) {
        if (i == 0 || uiSpriteGetCompletionState(&view->first[i - 1]))
            FUN_002bf818(&view->first[i]);
    }
    for (s32 i = 0; i < 6; ++i) {
        if (uiSpriteGetCompletionState(&view->first[i])) {
            if (view->soundEnabled[i] && !view->soundPlayed[i]) {
                FUN_002bf810(0x1000174);
                view->soundPlayed[i] = 1;
            }
            FUN_002bf818(&view->reveals[i]);
        }
    }
    for (s32 i = 0; i < 6; ++i) {
        if (!uiSpriteGetCompletionState(&view->first[i]) || !uiSpriteGetCompletionState(&view->reveals[i])) {
            complete = 0;
            break;
        }
    }
    for (s32 i = 0; i < 6; ++i) {
        if (view->reveals[i].verticalTrack.frame >= 14) {
            ++view->counters[i];
            if (view->counters[i] >= 65536)
                view->counters[i] = 0;
        }
    }
    return complete;
}
}
