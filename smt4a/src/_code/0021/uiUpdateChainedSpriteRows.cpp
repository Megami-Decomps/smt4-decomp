/* NON_MATCHING: O3 folds completion getters to unsigned loads and removes four NOPs, hoists an offset literal, and changes the final completion-loop registers; candidate -O2. */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "map/lmapMain.h"

struct ChainedSpriteWork {
    u8 unk0000[0x3900];
    UiAnimatedSprite first[6];
    u8 unk3c48[0x8c];
    UiAnimatedSprite second[6];
    u8 unk401c[0x364];
    s32 counters[6];
    u8 unk4398[0x58];
    u32 soundEnabled[6];
    u8 unk4408[0x18];
    u8 soundPlayed[6];
};

extern "C" {
s32 FUN_00163aa4(UiAnimatedSprite *sprite, f32 delta);

u32 uiUpdateChainedSpriteRows(ChainedSpriteWork *work)
{
    u32 finished = 1;
    for (s32 i = 0; i < 6; ++i) {
        if (i == 0 || uiAnimatedSpriteIsFinished(&work->first[i - 1])) {
            FUN_00163aa4(&work->first[i], 1.0f);
        }
    }
    for (s32 i = 0; i < 6; ++i) {
        if (uiAnimatedSpriteIsFinished(&work->first[i])) {
            if (work->soundEnabled[i] != 0 && work->soundPlayed[i] == 0) {
                sysPlayVoice(0x1000215);
                work->soundPlayed[i] = 1;
            }
            FUN_00163aa4(&work->second[i], 1.0f);
        }
    }
    for (s32 i = 0; i < 6; ++i) {
        if (!uiAnimatedSpriteIsFinished(&work->first[i]) || !uiAnimatedSpriteIsFinished(&work->second[i])) {
            finished = 0;
            break;
        }
    }
    for (s32 i = 0; i < 6; ++i) {
        if (work->second[i].frame >= 14) {
            if (++work->counters[i] >= 0x10000) {
                work->counters[i] = 0;
            }
        }
    }
    return finished;
}
}
