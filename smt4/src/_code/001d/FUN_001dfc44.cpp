#include "common.h"

struct EffectLine {
    void (**vtable)(EffectLine *); // 0x00
};
struct EffectLineWork {
    EffectLine *effect; // 0x00
};
extern "C" EffectLineWork *jobGetWork(u32 job);

// Advance the effect-line object owned by this job.
extern "C" s32 FUN_001dfc44(u32 job)
{
    EffectLine *effect = jobGetWork(job)->effect;
    effect->vtable[3](effect);
    return 0;
}
