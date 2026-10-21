/* NON_MATCHING: instruction selection/order differs: retail mov r2, #4; compiler mov r2, #15. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern InitialRequestState DAT_006400f8;

/* Clears pending requests and installs the default request kind and size. */
s32 FUN_0013f53c(void)
{
    DAT_006400f8.values[0] = 0;
    DAT_006400f8.values[1] = 0;
    DAT_006400f8.values[2] = 0;
    DAT_006400f8.values[3] = 0;
    DAT_006400f8.values[4] = 0;
    DAT_006400f8.values[5] = 0;
    DAT_006400f8.first = 15;
    DAT_006400f8.second = 4;
    return 1;
}

} /* extern "C" */
