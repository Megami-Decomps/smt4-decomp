#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *gameFlagsGetBlock(void);

u32 gameFlagsGetWorkValue(void)
{
    SaveWork *work = gameFlagsGetBlock();

    return work->unk18;
}

} /* extern "C" */
