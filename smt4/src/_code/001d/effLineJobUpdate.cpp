#include "shard/JobWork.h"
#include "shard/W6_W6Match5_EffectLineJob.h"

extern "C" {

// Advance an effect-line job's lifetime only while the effect is ready.
s32 effLineJobUpdate(u32 job)
{
    EffectLineJobWork *work = reinterpret_cast<EffectLineJobWork *>(jobGetWork(job));
    work->object->update();
    if (work->object->isReady()) {
        work->elapsed += 1.0f;
        if (work->duration <= work->elapsed)
            return -1;
    }
    return 0;
}
}
