#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern InitialRequestState DAT_004e3cd4;

/* Clears pending requests and installs the default request kind and size. */
s32 FUN_0010a780(void)
{
    for (s32 i = 0; i < 6; i++) {
        DAT_004e3cd4.values[i] = 0;
    }
    DAT_004e3cd4.first = 15;
    DAT_004e3cd4.second = 4;
    return 1;
}

} /* extern "C" */
