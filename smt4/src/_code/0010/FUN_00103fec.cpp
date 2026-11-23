/* NON_MATCHING: instruction selection/order differs: retail str r1, [r0]; compiler mov r2, #100. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern CommandQueueDefaults g_commandQueueDefaults;

/* Resets the command queue defaults: no entries, room for 100. */
void FUN_00103fec(void)
{
    g_commandQueueDefaults.count = 0;
    g_commandQueueDefaults.capacity = 100;
}

} /* extern "C" */
