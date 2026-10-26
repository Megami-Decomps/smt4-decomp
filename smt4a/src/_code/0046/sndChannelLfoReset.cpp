#include "common.h"

struct SndChannelLfo {
    u8 unk00[0x10];
    u32 unk10;
    f32 phase;
    f32 depth;
    u8 unk1C;
    u8 unk1D;
};

extern "C" {
void sndChannelLfoReset(SndChannelLfo *lfo)
{
    lfo->phase = 0.0f;
    lfo->depth = 1.0f;
    lfo->unk10 = 0;
    lfo->unk1C = 0;
    lfo->unk1D = 0;
}
}
