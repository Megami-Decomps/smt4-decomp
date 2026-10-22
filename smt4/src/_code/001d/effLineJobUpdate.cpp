#include "shard/W6_W6Match5_EffectLineJob.h"

extern "C" {
void *jobGetWork(void);

// Advance an effect-line job's lifetime only while the effect is ready.
s32 effLineJobUpdate(void)
{
    EffectLineJobWork *work = static_cast<EffectLineJobWork *>(jobGetWork());
    work->object->update();
    if (work->object->isReady()) {
        work->elapsed += 1.0f;
        if (work->duration <= work->elapsed)
            return -1;
    }
    return 0;
}
}
