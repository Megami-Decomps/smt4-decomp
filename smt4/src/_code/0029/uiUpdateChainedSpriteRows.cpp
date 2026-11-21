#include "ui/UiSpriteApi.h"
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
void soundPlaySeUnpanned(u32 sound);

/* Advances the six staged sprites (each waits for the previous one) and their reveals, playing each reveal's sound
 * once; counts frames once a reveal is far enough in. Returns 1 when every sprite and reveal has finished. */
u32 uiUpdateChainedSpriteRows(StagedAnimationView *view)
{
    u32 complete = 1;
    for (s32 i = 0; i < 6; ++i) {
        bool ready = true;
        if (i != 0)
            ready = uiSpriteGetCompletionState(&view->first[i - 1]) != 0;
        if (ready)
            uiSpriteAdvanceAnimation(&view->first[i]);
    }
    for (s32 i = 0; i < 6; ++i) {
        if (uiSpriteGetCompletionState(&view->first[i])) {
            if (view->soundEnabled[i] && !view->soundPlayed[i]) {
                soundPlaySeUnpanned(0x1000174);
                view->soundPlayed[i] = 1;
            }
            uiSpriteAdvanceAnimation(&view->reveals[i]);
        }
    }
    for (s32 i = 0; i < 6; ++i) {
        if (!uiSpriteGetCompletionState(&view->first[i])) {
            complete = 0;
            break;
        }
        if (!uiSpriteGetCompletionState(&view->reveals[i])) {
            complete = 0;
            break;
        }
    }
    for (s32 i = 0; i < 6; ++i) {
        if (view->reveals[i].alphaFrame >= 14) {
            ++view->counters[i];
            if (view->counters[i] >= 65536)
                view->counters[i] = 0;
        }
    }
    return complete;
}
}
