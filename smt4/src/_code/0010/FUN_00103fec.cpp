/* NON_MATCHING: instruction selection/order differs: retail str r1, [r0]; compiler mov r2, #100. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern CommandQueueDefaults _ZTV9Obj464cb0;

/* Resets queue defaults stored immediately after the command-object vtable. */
void FUN_00103fec(void)
{
    _ZTV9Obj464cb0.count = 0;
    _ZTV9Obj464cb0.capacity = 100;
}

} /* extern "C" */
