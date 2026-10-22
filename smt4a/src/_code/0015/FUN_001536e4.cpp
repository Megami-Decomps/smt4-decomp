/* NON_MATCHING: retail 51 vs built 52 rows; envelope-pointer addressing and ramp conversion scheduling differ. */
#include "common.h"

extern "C" {
void FUN_00163aa4(void *, f32);
void FUN_00169b30(void *);

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
    FUN_00163aa4(state->animation, 1.0f);
    for (s32 index = 0; index < 24; ++index) {
        Envelope &channel = state->channels[index];
        f32 value = static_cast<f32>(channel.level) * 0.01f;
        if (channel.frame < channel.rampFrames) {
            value = (value / static_cast<f32>(channel.rampFrames)) * static_cast<f32>(channel.frame);
        } else if (channel.rampFrames + channel.holdFrames <= channel.frame) {
            if (channel.rampFrames + channel.holdFrames + channel.rampFrames <= channel.frame) {
                FUN_00169b30(owner);
                return;
            }
            value -= (value / static_cast<f32>(channel.rampFrames)) *
                     static_cast<f32>(channel.frame - (channel.rampFrames + channel.holdFrames));
        }
        channel.value = value;
        ++channel.frame;
    }
}
}
