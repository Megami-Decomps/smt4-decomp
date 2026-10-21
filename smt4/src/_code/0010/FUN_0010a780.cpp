/* NON_MATCHING: instruction selection/order differs: retail mov r2, #4; compiler mov r2, #15. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern InitialRequestState DAT_004e3cd4;

/* Clears pending requests and installs the default request kind and size. */
s32 FUN_0010a780(void)
{
    DAT_004e3cd4.values[0] = 0;
    DAT_004e3cd4.values[1] = 0;
    DAT_004e3cd4.values[2] = 0;
    DAT_004e3cd4.values[3] = 0;
    DAT_004e3cd4.values[4] = 0;
    DAT_004e3cd4.values[5] = 0;
    DAT_004e3cd4.first = 15;
    DAT_004e3cd4.second = 4;
    return 1;
}

} /* extern "C" */
