/* NON_MATCHING: twin of IV's battleUpdateScreenFade; retail converts and merges the four channels one after another; armcc unrolls the channel loop and interleaves the conversions across VFP registers. */
#include "battle/BtlMainAccess.h"

static inline u32 interpolateMaskedColor(u32 from, u32 to, f32 weight)
{
    u32 color = 0;
    for (u32 mask = 0xff000000; mask != 0; mask >>= 8)
        color |= ((u32)((f32)((to & mask) - (from & mask)) * weight) + (from & mask)) & mask;
    return color;
}

/* Advance either direction of the selected packed-color fade. */
extern "C" void FUN_003e785c(BtlMainStateExtA *battle, s32 index)
{
    switch (battle->slotColorFade.mode[index]) {
    case 0:
        battle->slotColorFade.mode[index] = 1;
    case 1: {
        s32 duration = battle->slotColorFade.parameters[index];
        f32 weight = 1.0f - (f32)battle->slotColorFade.timer[index] / (f32)duration;
        battle->slotColorFade.baseColor[index] = interpolateMaskedColor(battle->slotColorFade.color[index], battle->slotColorFade.previousColor[index], weight);
        if (++battle->slotColorFade.timer[index] >= duration)
            battle->slotColorFade.mode[index] = 2;
        break;
    }
    case 2:
        battle->slotColorFade.baseColor[index] = battle->slotColorFade.color[index];
        battle->slotColorFade.mode[index] = 3;
        break;
    case 4:
        battle->slotColorFade.mode[index] = 5;
    case 5: {
        s32 duration = battle->slotColorFade.parameters[index];
        f32 weight = (f32)battle->slotColorFade.timer[index] / (f32)duration;
        battle->slotColorFade.baseColor[index] = interpolateMaskedColor(battle->slotColorFade.previousColor[index], battle->slotColorFade.color[index], weight);
        if (++battle->slotColorFade.timer[index] >= duration)
            battle->slotColorFade.mode[index] = 6;
        break;
    }
    case 6:
        battle->slotColorFade.baseColor[index] = battle->slotColorFade.color[index];
        battle->slotColorFade.mode[index] = 7;
        break;
    }
}
