#include "shard/Shard0037.h"

extern "C" {

extern s8 DAT_005e1f4c;

s32 sequenceRequestIsPending(void)
{
    return DAT_005e1f4c;
}

} /* extern "C" */
