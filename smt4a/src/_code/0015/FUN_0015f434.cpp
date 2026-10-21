/* NON_MATCHING: instruction selection/order differs: retail mov r1, #0; compiler mov r2, #0. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Initializes the work value and activates it. */
void FUN_0015f434(InitialWorkState *work)
{
    work->value = 0;
    work->active = 1;
}

} /* extern "C" */
