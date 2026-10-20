#include "shard/Shard0035.h"

extern "C" {

extern s32 effGetFrameStep(void);

void FUN_0035161c(Work2C *work)
{
    work->unk2C += effGetFrameStep();
}

} /* extern "C" */
