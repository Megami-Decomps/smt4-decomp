#include "common.h"

extern "C" {
s32 jobGetWork();
/* Reports whether the shared state query returned nonzero. */
bool FUN_002e58c4()
{
    return jobGetWork() != 0;
}
}
