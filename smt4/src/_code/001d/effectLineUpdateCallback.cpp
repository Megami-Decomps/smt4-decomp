#include "shard/JobWork.h"
#include "shard/W6_W6Match5_EffectLineJob.h"

// Draw task of the effect-line job: draws its effect object.
extern "C" s32 effectLineUpdateCallback(u32 job)
{
    EffectLineJobWork *work = reinterpret_cast<EffectLineJobWork *>(jobGetWork(job));
    work->object->draw();
    return 0;
}
