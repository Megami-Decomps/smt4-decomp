#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern InitialRequestState DAT_006400f8;

/* Clears pending requests and installs the default request kind and size. */
s32 FUN_0013f53c(void)
{
    for (s32 i = 0; i < 6; i++) {
        DAT_006400f8.values[i] = 0;
    }
    DAT_006400f8.first = 15;
    DAT_006400f8.second = 4;
    return 1;
}

} /* extern "C" */
