/* NON_MATCHING: first animation iteration is peeled and completion checks use unsigned byte loads instead of native signed accessor loads. */
#include "ui/UiSpriteState.h"
struct StagedAnimationView {
    u8 prefix[0x2CF8];
    UiSpriteState entrances[7];
    u8 unk30CC[0x8C];
    UiSpriteState reveals[6];
    u8 unk34A0[0xA8];
    s32 counters[6];
    u8 unk3560[0xB8];
    u32 soundEnabled[6];
    u8 unk3630[0x18];
    u8 soundPlayed[6];
};
typedef char StagedAnimationOffsets[offsetof(StagedAnimationView, entrances) == 0x2CF8 &&
    offsetof(StagedAnimationView, reveals) == 0x3158 &&
    offsetof(StagedAnimationView, counters) == 0x3548 &&
    offsetof(StagedAnimationView, soundEnabled) == 0x3618 &&
    offsetof(StagedAnimationView, soundPlayed) == 0x3648 ? 1 : -1];
extern "C" {
void FUN_002bf810(u32 sound);
void FUN_002bf818(UiSpriteState *sprite);
u32 FUN_002960ec(StagedAnimationView *view)
{
    u32 complete = 1;
    for (s32 i = 0; i < 6; ++i) {
        if (i == 0 || view->entrances[i].animationFlags.completed)
            FUN_002bf818(&view->entrances[i + 1]);
    }
    for (s32 i = 0; i < 6; ++i) {
        if (view->entrances[i + 1].animationFlags.completed) {
            if (view->soundEnabled[i] && !view->soundPlayed[i]) {
                FUN_002bf810(0x1000174);
                view->soundPlayed[i] = 1;
            }
            FUN_002bf818(&view->reveals[i]);
        }
    }
    for (s32 i = 0; i < 6; ++i) {
        if (!view->entrances[i + 1].animationFlags.completed || !view->reveals[i].animationFlags.completed) {
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
