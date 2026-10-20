#include "shard/JobWork.h"

extern "C" {

/* Reads the job work area's signed byte at 0x8c. */
s32 FUN_0016783c(void)
{
    return (s8)jobGetWork()->unk008C;
}

} /* extern "C" */
