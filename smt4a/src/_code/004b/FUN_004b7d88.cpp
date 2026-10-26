#include "common.h"
#include "code/Code004b_Smt4a.h"
struct SoundCueContext {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ s16 kind;
};
extern "C" {
bool gameFlagIsSet(u32);
u8 gameDataFlagTestBit(u32);
void sysPlaySe(u32);

/* Plays the cue of kinds 4 and 3; returns whether `kind` was one of them. */
static inline bool playSpecialCue(s16 kind)
{
    if (kind == 4) {
        sysPlaySe(0xEA);
        return true;
    }
    if (kind == 3) {
        sysPlaySe(0xEB);
        return true;
    }
    return false;
}

void FUN_004b7d88(const SoundCueContext* context)
{
    if (gameFlagIsSet(0x40C) == 0) {
        if (!playSpecialCue(context->kind)) {
            sysPlaySe(0x43);
        }
        return;
    }
    if (gameDataFlagTestBit(0x76) == 0) {
        if (!playSpecialCue(context->kind)) {
            sysPlaySe(0x43);
        }
        return;
    }
    if (!playSpecialCue(context->kind)) {
        sysPlaySe(0x45);
    }
}
}
