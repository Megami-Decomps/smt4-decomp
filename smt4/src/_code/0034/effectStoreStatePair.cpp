#include "common.h"

struct EffectState {
    /* 0x00 */ u8 unk00[36];
    /* 0x24 */ s32 first;
    /* 0x28 */ s32 second;
};

/* Stores both effect state values. */
extern "C" void effectStoreStatePair(s32 first, EffectState *effect, s32 second)
{
    effect->first = first;
    effect->second = second;
}
