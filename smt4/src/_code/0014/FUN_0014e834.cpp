/* NON_MATCHING: instruction selection/order differs: retail mov r2, #0; compiler movne r2, #0. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Stores a parameter only while the work is idle. */
bool FUN_0014e834(OptionalParameterWork *work, u32 parameter)
{
    bool idle = work->state == 0;
    if (idle) {
        work->parameter = parameter;
    }
    return idle;
}

} /* extern "C" */
