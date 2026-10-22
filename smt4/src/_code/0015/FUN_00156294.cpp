#include "common.h"

struct DelayEffect {
    u16 flags; // 0x00
    u16 amount; // 0x02
    u16 unk04;
    u16 feedback; // 0x06
    u32 delay; // 0x08
    u16 filter; // 0x0c
    u16 mix; // 0x0e
    u16 spread; // 0x10
    u16 damping; // 0x12
};
extern "C" u8 g_dspsndState[];
extern "C" void nn_snd_CTR_Dspsnd_SetDspDelayEffect(void *state, u32 index, const DelayEffect *effect);

// Merge the fields selected by the delay-effect update flags.
extern "C" void FUN_00156294(DelayEffect *effects, u32 index, const DelayEffect *update)
{
    DelayEffect *effect = &effects[index];
    if (update->flags & 1)
        effect->amount = update->amount;
    if (update->flags & 4) {
        effect->feedback = update->feedback;
        effect->filter = update->filter;
        effect->mix = update->mix;
        effect->spread = update->spread;
        effect->damping = update->damping;
    }
    if (update->flags & 2)
        effect->delay = update->delay;
    nn_snd_CTR_Dspsnd_SetDspDelayEffect(g_dspsndState, index, update);
}
