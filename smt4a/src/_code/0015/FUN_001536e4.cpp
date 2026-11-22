/* NON_MATCHING: retail hoists the channel base (owner + 0x1078, channels at +0x180 from it) and converts frame and rampFrames before the ramp test, dividing in each branch; armcc forms the address per iteration and converts later. */
#include "common.h"

extern "C" {
void uiSpriteAdvanceAnimation(void *, f32);
void cardTableReassignPlayer(void *);

void FUN_001536e4(void *owner)
{
    struct Envelope {
        s32 level;
        s32 rampFrames;
        s32 holdFrames;
        f32 value;
        s32 frame;
    };
    struct EnvelopeOwnerView {
        u8 unk0000[0xE8C];
        u8 animation[0x36C];
        Envelope channels[24];
    };
    EnvelopeOwnerView *state = static_cast<EnvelopeOwnerView *>(owner);
    uiSpriteAdvanceAnimation(state->animation, 1.0f);
    for (s32 index = 0; index < 24; ++index) {
        f32 value = static_cast<f32>(state->channels[index].level) * 0.01f;
        if (state->channels[index].frame < state->channels[index].rampFrames) {
            value = (value / static_cast<f32>(state->channels[index].rampFrames)) * static_cast<f32>(state->channels[index].frame);
        } else if (state->channels[index].frame >= state->channels[index].rampFrames + state->channels[index].holdFrames) {
            if (state->channels[index].frame < state->channels[index].rampFrames + state->channels[index].holdFrames + state->channels[index].rampFrames) {
                value -= (value / static_cast<f32>(state->channels[index].rampFrames)) *
                         static_cast<f32>(state->channels[index].frame - (state->channels[index].rampFrames + state->channels[index].holdFrames));
            } else {
                cardTableReassignPlayer(owner);
                return;
            }
        }
        state->channels[index].value = value;
        ++state->channels[index].frame;
    }
}
}
