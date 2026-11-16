#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern InitialRequestState g_touchInput;

/* Clears pending requests and installs the default request kind and size. */
s32 FUN_0013f53c(void)
{
    for (s32 i = 0; i < 6; i++) {
        g_touchInput.values[i] = 0;
    }
    g_touchInput.first = 15;
    g_touchInput.second = 4;
    return 1;
}

} /* extern "C" */
