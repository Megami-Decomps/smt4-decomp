#include "shard/JobWork.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct EventColorTransition {
    u32 job;
    u32 unk04;
    u32 event;
    s32 state;
    s32 frame;
    f32 red, green, blue, alpha;
    u32 textureSlot;
    s32 pulseEnabled;
    f32 pulse;
};
struct TextureSlot { u32 table, index; u8 unk08[8]; };
extern "C" {
extern TextureSlot DAT_0057f43c[4];
void FUN_0038a538(u32);

s32 eventColorTransitionUpdate(u32 job)
{
    EventColorTransition *effect = (EventColorTransition *)jobGetWork(job);
    switch (effect->state) {
    case 0:
        if (effect->textureSlot < 4 &&
            asdTMTexTableNodeIsLoaded(DAT_0057f43c[effect->textureSlot].table,
                                      DAT_0057f43c[effect->textureSlot].index)) {
            effect->frame = 0;
            effect->red = 0.0f;
            effect->green = 0.0f;
            effect->blue = 0.0f;
            effect->alpha = 0.0f;
            effect->state = 1;
            effect->pulse = 0.0f;
        }
        break;
    case 1: {
        s32 frame = effect->frame;
        if (frame <= 2) {
            effect->green = 0.0f;
            effect->blue = 0.0f;
            effect->red = (f32)frame * 0.5f;
            effect->alpha = (f32)frame * 0.5f;
        } else if (frame <= 4) {
            effect->blue = 0.0f;
            effect->red = 1.0f;
            effect->alpha = 1.0f;
            effect->green = (f32)(frame - 2) * 0.5f;
        } else if (frame <= 5) {
            effect->blue = 0.0f;
            effect->red = 1.0f;
            effect->green = 1.0f;
            effect->alpha = 1.0f;
        } else if (frame <= 9) {
            effect->blue = 0.0f;
            effect->green = 1.0f;
            effect->alpha = 1.0f;
            effect->red = (f32)(9 - frame) * 0.25f;
        } else if (frame <= 13) {
            effect->red = 0.0f;
            effect->alpha = 1.0f;
            effect->green = (f32)(14 - frame) * 0.25f;
            effect->blue = (f32)(frame - 9) * 0.25f;
        } else {
            effect->state = 2;
            effect->red = 0.0f;
            effect->green = 0.0f;
            effect->blue = 1.0f;
            effect->alpha = 1.0f;
            FUN_0038a538(effect->event);
        }
        if (effect->pulseEnabled && effect->frame > 3 && effect->frame <= 5)
            effect->pulse = (f32)(effect->frame - 3) * 0.5f;
        else if (effect->pulseEnabled && effect->frame > 3 && effect->frame <= 7)
            effect->pulse = (f32)(7 - effect->frame) * 0.5f;
        else
            effect->pulse = 0.0f;
        break;
    }
    }
    ++effect->frame;
    return 0;
}
}
