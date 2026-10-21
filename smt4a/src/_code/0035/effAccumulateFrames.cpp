#include "shard/Shard0035.h"

extern "C" {

extern s32 effGetFrameStep(void);

void effAccumulateFrames(Work2C *work)
{
    work->unk2C += effGetFrameStep();
}

} /* extern "C" */
