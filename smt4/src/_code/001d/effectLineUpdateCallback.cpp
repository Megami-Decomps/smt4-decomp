#include "common.h"
#include "shard/JobWork.h"

struct EffectLine {
    void (**vtable)(EffectLine *); // 0x00
};
struct EffectLineWork {
    EffectLine *effect; // 0x00
};

// Advance the effect-line object owned by this job.
extern "C" s32 effectLineUpdateCallback(u32 job)
{
    EffectLine *effect = ((EffectLineWork *)jobGetWork(job))->effect;
    effect->vtable[3](effect);
    return 0;
}
